import glob
import time

from pyparsing import col
import global_val 


def get_blockId(perf):
    # print(global_val.computeDict)
    return global_val.computeDict[int(perf)]


def parse_comm_datatype(datatype, datacount):
    if datatype == 4:
        return datacount, 'MPI_INT'
    elif datatype == 8:
        return datacount, 'MPI_DOUBLE'
    
    return datacount*datatype, 'MPI_CHAR'


def parse_comm(comm_str):
    try:
        res = int(global_val.comm_map[comm_str]['id'])
    except Exception as e:
        res = 0
    return res


def handle_multi_request(prefix, requests):
    requests = requests.split(':')
    length = len(requests)
    s = ''
    s += prefix
    # print(global_val.requestDict)
    for i in range(length-1):
        s += 'wait_requests[{}] = requests[{}]; '.format(i, requests[i])
    s += '\n'
    return length-1, s


def call_mpi_by_str(s: str, prefix: str):
    s = s.split('\n')[0].split(';')
    rank = int(s[0])
    mpi_name = s[1]
    datacount = int(s[2])
    datatype = int(s[3])
    target = int(s[4])
    requests = s[5]
    request = s[5].split(':')[0]

    cnt, tp = parse_comm_datatype(datatype, datacount)

    if mpi_name == 'MPI_Bcast':
        comm = parse_comm(s[6])
        return prefix+'MPI_Bcast(buffer, {}, {}, {}, comms[{}]);\n'.format(cnt, tp, target, comm)
    elif mpi_name == 'MPI_Send':
        comm = parse_comm(s[6])
        return prefix+'MPI_Send(sendbuf, {}, {}, {}, 0, comms[{}]);\n'.format(cnt, tp, target, comm)
    elif mpi_name == 'MPI_Irecv':
        comm = parse_comm(s[6])
        return prefix+'MPI_Irecv(recvbuf, {}, {}, {}, 0, comms[{}], &requests[{}]);\n'.format(cnt, tp, target, comm, request)
    elif mpi_name == 'MPI_Wait':
        return prefix+'MPI_Wait(&requests[{}], &status);\n'.format(request)
    elif mpi_name == 'MPI_Reduce':
        comm = parse_comm(s[6])
        return prefix+'MPI_Reduce(sendbuf, recvbuf, {}, {}, MPI_SUM, {}, comms[{}]);\n'.format(cnt, tp, target, comm)
    elif mpi_name == 'MPI_Barrier':
        comm = parse_comm(s[6])
        return prefix+'MPI_Barrier(comms[{}]);\n'.format(comm)
    elif mpi_name == 'MPI_Allreduce':
        comm = parse_comm(s[6])
        return prefix+'MPI_Allreduce(sendbuf, recvbuf, {}, {}, MPI_SUM, comms[{}]);\n'.format(cnt, tp, comm)
    elif mpi_name == 'MPI_Recv':
        comm = parse_comm(s[6])
        return prefix+'MPI_Recv(recvbuf, {}, {}, {}, 0, comms[{}], &status);\n'.format(cnt, tp, target, comm)
    elif mpi_name == 'MPI_Isend':
        comm = parse_comm(s[6])
        return prefix+'MPI_Isend(sendbuf, {}, {}, {}, 0, comms[{}], &requests[{}]);\n'.format(cnt, tp, target, comm, request)
    elif mpi_name == 'MPI_Waitall':
        num, temp = handle_multi_request(prefix, requests)
        return temp+prefix+'MPI_Waitall({}, wait_requests, wait_status);\n'.format(num)
    elif mpi_name == 'MPI_Comm_split':
        pre_comm = parse_comm(s[6])
        comm = parse_comm(s[7])
        color = int(s[8])
        key = int(s[9])
        return prefix+'MPI_Comm_split(comms[{}], {}, {}, &comms[{}]);\n'.format(pre_comm, color, key, comm)
    elif mpi_name == 'MPI_Comm_dup':
        pre_comm = parse_comm(s[6])
        comm = parse_comm(s[7])
        return prefix+'MPI_Comm_dup(comms[{}], &comms[{}]);\n'.format(pre_comm, comm)
    elif mpi_name == 'MPI_Comm_free':
        comm = parse_comm(s[6])
        return prefix+'MPI_Comm_free(&comms[{}]);\n'.format(comm)
    elif mpi_name == 'MPI_Allgather':
        comm = parse_comm(s[6])
        return prefix+'MPI_Allgather(sendbuf, {}, {}, recvbuf, {}, {}, comms[{}]);\n'.format(cnt, tp, datacount, parse_comm_datatype(datatype), comm)
    else:
        return ''


def is_terminal_comm(s: str):
    if s.find('MPI') >= 0:
        isComm = True
    else:
        isComm = False
    return isComm


def convert_id2str(id: int, times: int, depth: int, prefix: str):
    res = ''
    inline_prefix = prefix
    if times > 1:
        res += prefix+'for (int i{} = 0; i{} < {}; i{}++) {{\n'.format(depth, depth, times, depth)
        inline_prefix += '\t'

    if id > 0:
        # 是终结符
        s = global_val.id_signature_table[id]
        if is_terminal_comm(str(s)):
            res += call_mpi_by_str(s, inline_prefix)
        else:
            # 如果是计算代码块
            
            res += inline_prefix + 'block{}();\n'.format(get_blockId(s))
    else:
        # 是非终结符
        ptr = global_val.rules_list[-id].first()
        while True:
            if ptr.is_guard():
                break
            if ptr.is_non_terminal():
                res += convert_id2str(-ptr.rule.index, ptr.exp, depth+1, inline_prefix)
            else:
                res += convert_id2str(ptr.id, ptr.exp, depth+1, inline_prefix)
            ptr = ptr.next

    if times > 1:
        res += prefix+'}\n'
    return res


def code_generation_single_process():
    res = convert_id2str(0, 1, 0, '\t\t')
    return res


def create_self_non_term(prefix, rank):
    nonterm_h_out = open(prefix+'nonterm_{}.h'.format(rank), 'w')
    nonterm_h_out.write('#include "block.h"\n')
    nonterm_h_out.write('#include "mpi.h"\n')
    non_term_max = len(global_val.rules_list)
    for i in range(non_term_max):
        nonterm_h_out.write('void non_term_{}_{}(int rank, MPI_Comm comms[], MPI_Request requests[], MPI_Request wait_requests[], MPI_Status status, void* sendbuf, void* recvbuf, void* buffer);\n'.format(rank, i))
    nonterm_h_out.close()
    
    nonterm_c_out = open(prefix+'nonterm_{}.c'.format(rank), 'w')
    nonterm_c_out.write('#include "nonterm_{}.h"\n\n'.format(rank))
    for i in range(non_term_max):
        ptr = global_val.rules_list[i].first()
        nonterm_c_out.write('void non_term_{}_{}(int rank, MPI_Comm comms[], MPI_Request requests[], MPI_Request wait_requests[], MPI_Status status, void* sendbuf, void* recvbuf, void* buffer) {{\n'.format(rank, i))
        while True:
            if ptr.is_guard():
                break
            if ptr.is_non_terminal():
                if ptr.exp != 1:
                    nonterm_c_out.write('\tfor (int i = 0; i < {}; i++)\n'.format(ptr.exp))
                    nonterm_c_out.write('\t')
                nonterm_c_out.write('\tnon_term_{}_{}(rank, comms, requests, wait_requests, status, sendbuf, recvbuf, buffer);\n'.format(rank, ptr.rule.index))
            else:
                res = convert_id2str(ptr.id, ptr.exp, 1, '\t')
                nonterm_c_out.write(res)
            ptr = ptr.next
        nonterm_c_out.write('}\n')
        


def code_generation(prefix, output_filename, request_num, rank, comm):

    # all_non_term = comm.gather(global_val.call_signature_table, 0)
    size = comm.Get_size()
    create_self_non_term(prefix, rank)

    if rank == 0:
        out = open(output_filename, 'w')
        out.write('#include <stdlib.h>\n')
        out.write('#include <stdio.h>\n')
        out.write('#include <string.h>\n')
        out.write('#include "mpi.h"\n')
        out.write('#include "block.h"\n')
        out.write('#include "time.h"\n')

        for i in range(size):
            out.write('#include "nonterm_{}.h"\n'.format(i))

        out.write('#define REQUEST_NUM {}\n'.format(request_num))
        out.write('#define COMM_NUM {}\n'.format(global_val.comm_cnt))
        out.write('int main(int argc, char** argv) {\n')
        out.write('\tint rank, size;\n\tint i = 0;\n')
        out.write('\tMPI_Init(&argc, &argv);\n')
        out.write('\tMPI_Comm_size(MPI_COMM_WORLD, &size);\n')
        out.write('\tMPI_Comm_rank(MPI_COMM_WORLD, &rank);\n')
        out.write('\tMPI_Comm comms[COMM_NUM];\n')
        out.write('\tcomms[0] = MPI_COMM_WORLD;\n')
        out.write('\tMPI_Status status;\n')
        out.write('\tMPI_Status wait_status[REQUEST_NUM];\n')
        out.write('\tvoid* buffer=malloc(10000000);\n')
        out.write('\tvoid* sendbuf=malloc(10000000);\n')
        out.write('\tvoid* recvbuf=malloc(10000000);\n')
        out.write('\tinitial();\n')

    res = code_generation_single_process()
    data = comm.gather(res, 0)

    if rank == 0:
        for i in range(comm.size):
            out.write('\tif (rank == {}) {{\n'.format(i))
            out.write('\t\tdouble start, end;\n')
            out.write('\t\tstart = MPI_Wtime();\n')
            out.write('\t\tMPI_Request requests[REQUEST_NUM];\n')
            out.write('\t\tMPI_Request wait_requests[REQUEST_NUM];\n')
            out.write('\t\tnon_term_{}_{}(rank, comms, requests, wait_requests, status, sendbuf, recvbuf, buffer);\n'.format(i, 0))
            out.write('\t\tend = MPI_Wtime();\n')
            out.write('\t\tdouble duration = (double)(end - start);\n')
            out.write('\t\tprintf("rank %d end, using time %f seconds\\n", rank, duration);\n')
            out.write('\t}')

        out.write('\tMPI_Finalize();\n')

        out.write('}')

        out.close()

        make = open(prefix+'makefile', 'w')
        make.write('all: block.c block.h code0.c ')
        for i in range(size):
            make.write('nonterm_{}.c nonterm_{}.h '.format(i, i))
        make.write('\n')
        for i in range(size):
            make.write('\tmpicc -c nonterm_{}.c -std=c99\n'.format(i))
        
        make.write('\tmpicc -c block.c -std=c99\n')
        make.write('\tmpicc -o code code0.c block.o ')
        for i in range(size):
            make.write('nonterm_{}.o '.format(i))
        make.write(' -std=c99')
        make.write('\n')
        make.close()
