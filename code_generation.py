import glob
import time

from pyparsing import col
import global_val 


def get_blockId(perf):
    # print(global_val.computeDict)
    return global_val.computeDict[int(perf)]


def parse_comm_datatype(datatype):
    if datatype == 4:
        return 'MPI_INT'
    elif datatype == 8:
        return 'MPI_DOUBLE'
    return 'MPI_INT'


def parse_comm(comm_str):
    return int(global_val.comm_map[comm_str]['id'])


def call_mpi_by_str(s: str, prefix: str):
    s = s.split('\n')[0].split(';')
    rank = int(s[0])
    mpi_name = s[1]
    datacount = int(s[2])
    datatype = int(s[3])
    target = int(s[4])
    request = s[5]
    if mpi_name == 'MPI_Bcast':
        comm = parse_comm(s[6])
        return prefix+'MPI_Bcast(buffer, {}, {}, {}, comm[{}]);\n'.format(datacount, parse_comm_datatype(datatype), target, comm)
    elif mpi_name == 'MPI_Send':
        comm = parse_comm(s[6])
        return prefix+'MPI_Send(sendbuf, {}, {}, {}, 0, comm[{}]);\n'.format(datacount, parse_comm_datatype(datatype), target, comm)
    elif mpi_name == 'MPI_Irecv':
        comm = parse_comm(s[6])
        return prefix+'MPI_Irecv(recvbuf, {}, {}, {}, 0, comm[{}], &requests[{}]);\n'.format(datacount, parse_comm_datatype(datatype), target, comm, global_val.requestDict[request])
    elif mpi_name == 'MPI_Wait':
        return prefix+'MPI_Wait(&requests[{}], &status);\n'.format(global_val.requestDict[request])
    elif mpi_name == 'MPI_Reduce':
        comm = parse_comm(s[6])
        return prefix+'MPI_Reduce(sendbuf, recvbuf, {}, {}, MPI_SUM, {}, comm[{}]);\n'.format(datacount, parse_comm_datatype(datatype), target, comm)
    elif mpi_name == 'MPI_Barrier':
        comm = parse_comm(s[6])
        return prefix+'MPI_Barrier(comm[{}]);\n'.format(comm)
    elif mpi_name == 'MPI_Allreduce':
        comm = parse_comm(s[6])
        return prefix+'MPI_Allreduce(sendbuf, recvbuf, {}, {}, MPI_SUM, comm[{}]);\n'.format(datacount, parse_comm_datatype(datatype), comm)
    elif mpi_name == 'MPI_Recv':
        comm = parse_comm(s[6])
        return prefix+'MPI_Recv(recvbuf, {}, {}, {}, 0, comm[{}], &status);\n'.format(datacount, parse_comm_datatype(datatype), target, comm)
    elif mpi_name == 'MPI_Isend':
        comm = parse_comm(s[6])
        return prefix+'MPI_Isend(sendbuf, {}, {}, {}, 0, comm[{}], &requests[{}]);\n'.format(datacount, parse_comm_datatype(datatype), target, comm, global_val.requestDict[request])
    elif mpi_name == 'MPI_Waitall':
        return prefix+'MPI_Waitall();\n'
    elif mpi_name == 'MPI_Comm_split':
        pre_comm = parse_comm(s[6])
        comm = parse_comm(s[7])
        color = int(s[8])
        key = int(s[9])
        return prefix+'MPI_Comm_split(comm[{}], {}, {}, &comm[{}]);\n'.format(pre_comm, color, key, comm)
    elif mpi_name == 'MPI_Comm_dup':
        pre_comm = parse_comm(s[6])
        comm = parse_comm(s[7])
        return prefix+'MPI_Comm_dup(comm[{}], &comm[{}]);\n'.format(pre_comm, comm)
    elif mpi_name == 'MPI_Comm_free':
        comm = parse_comm(s[6])
        return prefix+'MPI_Comm_free(&comm[{}]);\n'.format(comm)
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


def code_generation(output_filename, request_num, rank, comm):
    if rank == 0:
        out = open(output_filename, 'w')
        out.write('#include <stdlib.h>\n')
        out.write('#include <stdio.h>\n')
        out.write('#include <string.h>\n')
        out.write('#include "mpi.h"\n')
        out.write('#include "block.h"\n')
        out.write('#include "time.h"\n')
        out.write('#define REQUEST_NUM {}\n'.format(request_num))
        out.write('#define COMM_NUM {}\n'.format(global_val.comm_cnt))
        out.write('int main(int argc, char** argv) {\n')
        out.write('\tint rank, size;\n\tint i = 0;\n')
        out.write('\tMPI_Init(&argc, &argv);\n')
        out.write('\tMPI_Comm_size(MPI_COMM_WORLD, &size);\n')
        out.write('\tMPI_Comm_rank(MPI_COMM_WORLD, &rank);\n')
        out.write('\tMPI_Comm comm[COMM_NUM];\n')
        out.write('\tcomm[0] = MPI_COMM_WORLD;\n')
        out.write('\tMPI_Status status;\n')
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
            out.write(data[i])
            out.write('\t\tend = MPI_Wtime();\n')
            out.write('\t\tdouble duration = (double)(end - start);\n')
            out.write('\t\tprintf("rank %d end, using time %f seconds\\n", rank, duration);\n')
            out.write('\t}')

        out.write('\tMPI_Finalize();\n')

        out.write('}')

        out.close()

