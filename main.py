

import argparse

from mpi4py import MPI
# from code_gen import gen_block_c
from with_compute import allGather, computeBlockHash, gen_compute_dict
import sequitur_test
import code_generation
import global_val
import combine_comm


def getArgs():
    parser = argparse.ArgumentParser()
    parser.add_argument('--tracepath', '-t', dest='pathPrefix', default='/home/yantao/run/sequitur/flash_traces_new/', help='trace file path prefix')
    parser.add_argument('--nprocs', '-n', dest='nprocs', default=16, help='process number')
    parser.add_argument('--output', '-o', dest='outprefix', default='/home/yantao/run/sequitur/', help='output Filename')
    args = parser.parse_args() 
    return args


comm = MPI.COMM_WORLD
rank = comm.Get_rank()
global_val.rank = rank
args = getArgs()
nprocs = args.nprocs
output_filename = args.outprefix+'code{}.c'.format(rank)
pathPrefix = args.pathPrefix
trace_name = pathPrefix+str(rank)+'.trace'

print('getting trace from {}'.format(trace_name))
global_val.truncateDict, global_val.redirect, global_val.bucket, global_val.requestDict, global_val.performanceDict = computeBlockHash(trace_name)

global_val.requestUsed = [False]*len(global_val.requestDict)

if rank == 0:
    print(len(global_val.bucket))

data = allGather(comm, rank, global_val.performanceDict, global_val.bucket)

if rank == 0:
    print(data['bucket'])
    print(data['performanceDict'])
    print(global_val.call_signature_table)
    print(global_val.comm_cnt, global_val.comm_map)

mergeDict = data['mergeDicts'][rank]

global_val.redirect = {key: mergeDict[global_val.redirect[key]] for key in global_val.redirect}

gen_compute_dict(data)

data = comm.gather(global_val.computeDict, 0)

sequitur_test.process_grammar(trace_name)
sequitur_test._print_rules(rank=rank)

combine_comm.comm_combine(rank=rank, comm=comm, args=args)

global_val.id_signature_table = dict(zip(global_val.call_signature_table.values(), global_val.call_signature_table.keys()))

global_val.non_terminal_dict = dict(zip(global_val.unique_dict.values(), global_val.unique_dict.keys()))

data = comm.gather(global_val.call_signature_table, 0)

# if rank == 0: 
#     print(global_val.call_signature_table)

comm.barrier()

data = comm.gather(global_val.computeDict, 0)

# if rank == 0:
#     print(global_val.computeDict)

comm.barrier()

code_generation.code_generation(args.outprefix, output_filename, len(global_val.requestDict), rank, comm)

# if rank == 0:
#     gen_block_c(data['bucket'])
