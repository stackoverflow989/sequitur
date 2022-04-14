

import argparse

from mpi4py import MPI
from with_compute import allGather, computeBlockHash, gen_compute_dict
import sequitur_test
import code_generation
import global_val
from global_val import requestDict, call_signature_table, rules_list


def getArgs():
    parser = argparse.ArgumentParser()
    parser.add_argument('--tracepath', '-t', dest='pathPrefix', default='/home/xuqingguo/src/performance/sequitur/CG_B_8/trace/', help='trace file path prefix')
    parser.add_argument('--nprocs', '-n', dest='nprocs', default=16, help='process number')
    parser.add_argument('--output', '-o', dest='outprefix', default='/home/xuqingguo/src/performance/sequitur/', help='output Filename')
    args = parser.parse_args() 
    return args


comm = MPI.COMM_WORLD
rank = comm.Get_rank()
args = getArgs()
nprocs = args.nprocs
output_filename = args.outprefix+'code{}.c'.format(rank)
pathPrefix = args.pathPrefix
trace_name = pathPrefix+str(rank)+'.trace'

print('getting trace from {}'.format(trace_name))
global_val.truncateDict, global_val.redirect, global_val.bucket, global_val.requestDict, global_val.performanceDict = computeBlockHash(trace_name)

data = allGather(comm, rank, global_val.performanceDict, global_val.bucket)
# if rank == 0:
#     print(data['performanceDict'])
#     print(data['bucket'])
global_val.requestDict = data['requestDict']
# if rank == 0:
#     print(global_val.requestDict)
# if rank == 0:
#     print(data)
# print(global_val.redirect)

if rank == 0:
    
    print(data['bucket'])
    print(data['performanceDict'])

mergeDict = data['mergeDicts'][rank]

global_val.redirect = {key: mergeDict[global_val.redirect[key]] for key in global_val.redirect}

gen_compute_dict(data)

data = comm.gather(global_val.computeDict, 0)

# if rank == 0:
#     print(data)

sequitur_test.process_grammar(trace_name)
print(global_val.call_signature_table)
sequitur_test._print_rules(rank)

# if rank == 0:
#     print(global_val.call_signature_table)
# data = comm.gather(global_val.call_signature_table, 0)

# if rank == 1:
    # print(data)
    # print(global_val.computeDict)



global_val.id_signature_table = dict(zip(global_val.call_signature_table.values(), global_val.call_signature_table.keys()))

data = comm.gather(global_val.computeDict, 0)

# if rank == 0:
#     print(data)

# print(global_val.call_signature_table)
# print(global_val.rules_list)
# print(global_val.requestDict)
code_generation.code_generation(output_filename, len(global_val.requestDict), rank, comm)
