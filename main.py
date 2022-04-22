

import argparse

from mpi4py import MPI
from with_compute import allGather, computeBlockHash, gen_compute_dict
import sequitur_test
import code_generation
import global_val


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

if rank == 0:
    print(data['bucket'])
    print(data['performanceDict'])

mergeDict = data['mergeDicts'][rank]

global_val.redirect = {key: mergeDict[global_val.redirect[key]] for key in global_val.redirect}

gen_compute_dict(data)

data = comm.gather(global_val.computeDict, 0)

sequitur_test.process_grammar(trace_name)
sequitur_test._print_rules(rank)

global_val.id_signature_table = dict(zip(global_val.call_signature_table.values(), global_val.call_signature_table.keys()))

data = comm.gather(global_val.computeDict, 0)

code_generation.code_generation(output_filename, len(global_val.requestDict), rank, comm)
