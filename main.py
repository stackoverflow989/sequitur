

import argparse

from mpi4py import MPI
from with_compute import allGather, computeBlockHash
import sequitur_test
import code_generation
import global_val
from global_val import requestDict, call_signature_table, rules_list


def getArgs():
    parser = argparse.ArgumentParser()
    parser.add_argument('--tracepath',  action='store_true', dest='pathPrefix', default='/home/xuqingguo/src/performance/mpi_splice/', help='trace file path prefix')
    parser.add_argument('--nprocs', '-n', action='store_true', dest='nprocs', default=16, help='process number')
    parser.add_argument('--output', '-o', action='store_true', dest='output', default='code.c', help='output Filename')
    args = parser.parse_args() 
    return args


comm = MPI.COMM_WORLD
rank = comm.Get_rank()
args = getArgs()
nprocs = args.nprocs
output_filename = 'code{}.c'.format(rank)
pathPrefix = args.pathPrefix
trace_name = pathPrefix+str(rank)+'.trace'

global_val.truncateDict, global_val.redirect, global_val.bucket, global_val.requestDict, global_val.performanceDict = computeBlockHash(trace_name)

data = allGather(comm, rank, global_val.performanceDict, global_val.bucket)
if rank == 0:
    print(data['performanceDict'])
    print(data['bucket'])
global_val.requestDict = data['requestDict']
# if rank == 0:
#     print(global_val.requestDict)
if rank == 0:
    print(data)
# print(global_val.redirect)
# if rank == 0:
#     print(data['bucket'])

mergeDict = data['mergeDicts'][rank]

global_val.redirect = {key: mergeDict[global_val.redirect[key]] for key in global_val.redirect}
# print(set(global_val.redirect.values()))


sequitur_test.process_grammar(trace_name)

# print(global_val.call_signature_table)
# print(global_val.rules_list)
# print(global_val.requestDict)
code_generation.code_generation(output_filename, len(global_val.requestDict), rank, comm)
