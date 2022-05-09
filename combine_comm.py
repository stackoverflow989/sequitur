import argparse
import os
import editDistance
from utils import inverseDict

import sequitur_test
import nonterminal_dict
from with_compute import *
from mpi4py import MPI
from MPI_define import *
import numpy as np
import pickle

# comm = MPI.COMM_WORLD
# rank = comm.Get_rank()
# size = comm.Get_size()
#
#
# def getArgs():
#     parser = argparse.ArgumentParser()
#     parser.add_argument('--tracepath', '-t', dest='pathPrefix', default='CG_C_16/trace/', help='trace file path prefix')
#     parser.add_argument('--nprocs', '-n', dest='nprocs', default=16, help='process number')
#     parser.add_argument('--output', '-o', dest='outprefix', default='CG_C_16/trace/', help='output Filename')
#     args = parser.parse_args()
#     return args
#
#
# args = getArgs()
# output_filename = args.outprefix + 'combined_cst_cfg'
# if rank == 0:
#     if not os.path.exists(args.outprefix):
#         os.mkdir(args.outprefix)
#     if not os.path.exists(args.outprefix + 'cst-cfg-logs'):
#         os.mkdir(args.outprefix + 'cst-cfg-logs')
# comm.barrier()
#
# pathPrefix = args.pathPrefix
# trace_name = pathPrefix + str(rank) + '.trace'
# out_file = args.outprefix + "res_of_tatio.log"
# print("trying to compress " + trace_name + " !")


def combine_cst(rank, comm, args):
    with open(args.outprefix + 'cst-cfg-logs/' + str(rank) + "cst&cfg.log", 'w') as fo:
        all_cst = comm.gather(global_val.call_signature_table, root=0)
        gathered_cst = {}
        cst_num_global = 0
        for key, value in global_val.call_signature_table.items():
            fo.write(str(key) + " : " + str(value) + "\n")
        if rank == 0:
            for one_dict in all_cst:
                if gathered_cst is None:
                    gathered_cst = one_dict
                    cst_num_global = len(gathered_cst)
                else:
                    for elem in one_dict.keys():
                        if elem not in gathered_cst:
                            cst_num_global += 1
                            gathered_cst[elem] = cst_num_global
            # print(combined_cst)
            # print(cst_num_global)
            # with open("combined_cst", "wb") as fout:
            #     pickle.dump(gathered_cst, fout)
        gathered_cst = comm.bcast(gathered_cst, root=0)
        # print("process" + str(rank) + "receive : \n" + str(combined_cst))
    return gathered_cst


def inverse_dict(cst):
    return dict(zip(cst.values(), cst.keys()))


def serialize_cfg(combined_cst, rank):
    inversed_dict = inverse_dict(global_val.call_signature_table)
    cfg_list = []
    rules_list = [global_val.main_rule]
    length = 1
    j = 0
    while j < length:
        temp = str(rank) + '&' + str(-j) + '->'
        ptr = rules_list[j].first()
        while True:
            if ptr.is_guard():
                break
            # temp += "a\"" + str(id(ptr)) + "\" "
            if ptr.is_non_terminal():
                if length > ptr.rule.index and rules_list[ptr.rule.index] == ptr.rule:
                    i = ptr.rule.index
                else:
                    i = length
                    ptr.rule.index = length
                    rules_list.append(ptr.rule)
                    length += 1
                temp += str(rank) + '&' + str(-i) + '^' + str(ptr.exp) + ' '
            else:
                temp += str(combined_cst[inversed_dict[ptr.id]]) + '^' + str(ptr.exp) + ' '
            ptr = ptr.next
        j += 1
        cfg_list.append(temp)
    return cfg_list


def serialize_cfg_for_edit_distance(combined_cst, comm):
    inversed_dict = inverse_dict(global_val.call_signature_table)
    cfg_list = []
    rules_list = [global_val.main_rule]
    length = 1
    j = 0
    while j < length:
        temp = [-j]
        ptr = rules_list[j].first()
        while True:
            if ptr.is_guard():
                break
            # temp += "a\"" + str(id(ptr)) + "\" "
            if ptr.is_non_terminal():
                if length > ptr.rule.index and rules_list[ptr.rule.index] == ptr.rule:
                    i = ptr.rule.index
                else:
                    i = length
                    ptr.rule.index = length
                    rules_list.append(ptr.rule)
                    length += 1
                temp.append(-i)
                temp.append(ptr.exp)
            else:
                temp.append(combined_cst[inversed_dict[ptr.id]])
                temp.append(ptr.exp)
            ptr = ptr.next
        j += 1
        cfg_list.append(temp)
    gathered_grammar = comm.gather(cfg_list, 0)
    gathered_grammar = comm.bcast(gathered_grammar, 0)
    return gathered_grammar


def combine_cfg(combined_cst, loacl_cfg, rank, comm, args):
    # print("start combining context free grammar")
    gathered_grammar = comm.gather(loacl_cfg, 0)
    with open(args.outprefix + 'cst-cfg-logs/' + str(rank) + "cst&cfg.log", 'a') as fo:
        fo.write("\n")
        for line in loacl_cfg:
            fo.write(str(line) + "\n")
    if rank == 0:
        main_rules, unique_dict, rule_dict = nonterminal_dict.build_dict(gathered_grammar)
        # grammar_number = []
        # dict_list = []
        # unique_number = 0
        # for i in range(size):
        #     one_grammar = str(gathered_grammar[i])
        #     if one_grammar not in dict_list:
        #         dict_list.append(one_grammar)
        #         unique_grammar.append(gathered_grammar[i])
        #         grammar_number.append(unique_number)
        #         unique_number += 1
        #     else:
        #         grammar_number.append(dict_list.index(one_grammar))
        # print(grammar_number)
        # print(unique_grammar)
        # print(unique_number)
        # serialize(unique_grammar, grammar_number, combined_cst)
        # return grammar_number, unique_grammar
        # with open("combined_cfg", "wb") as fout:
        #     pickle.dump(unique_grammar, fout)
    else:
        main_rules = []
        unique_dict = {}
        rule_dict = {}
    comm.barrier()
    main_rules = comm.bcast(main_rules, 0)
    unique_dict = comm.bcast(unique_dict, 0)
    rule_dict = comm.bcast(rule_dict, 0)
    return main_rules, unique_dict, rule_dict


def serialize(unique_grammar, grammar_number, combined_cst, args):
    data_info = {
        'unique_grammar': unique_grammar,
        'grammar_number': grammar_number,
        'combined_cst': combined_cst
    }
    with open(args.outprefix + 'combined_cst_cfg', "wb") as fout:
        pickle.dump(data_info, fout)


def deserialize(args):
    with open(args.outprefix + 'combined_cst_cfg', "rb") as fin:
        data_info = pickle.load(fin)


# print('getting trace from {}'.format(trace_name))
# global_val.truncateDict, global_val.redirect, global_val.bucket, global_val.requestDict, global_val.performanceDict = computeBlockHash(trace_name)
#
# global_val.requestUsed = [False]*len(global_val.requestDict)
#
# if rank == 0:
#     print(len(global_val.bucket))
#
# data = allGather(comm, rank, global_val.performanceDict, global_val.bucket)
#
# mergeDict = data['mergeDicts'][rank]
#
# global_val.redirect = {key: mergeDict[global_val.redirect[key]] for key in global_val.redirect}
#
# gen_compute_dict(data)
#
# data = comm.gather(global_val.computeDict, 0)
#
# # if rank == 0:
# #     print(data)
# sequitur_test.process_grammar(trace_name)
# # sequitur_test._print_rules(rank)


def comm_combine(rank, comm, args):
    if rank == 0:
        if not os.path.exists(args.outprefix):
            os.mkdir(args.outprefix)
        if not os.path.exists(args.outprefix + 'cst-cfg-logs'):
            os.mkdir(args.outprefix + 'cst-cfg-logs')
    comm.barrier()
    gathered_cst = combine_cst(rank, comm, args)

    global_val.gathered_cst = inverseDict(gathered_cst)

    # 用于计算全局的非终结符字典和新的main rule
    gathered_cfg = serialize_cfg(gathered_cst, rank)
    if rank == 0:
        print(gathered_cst)
    main_rules, unique_dict, rule_dict = combine_cfg(gathered_cst, gathered_cfg, rank, comm, args)
    comm.barrier()
    # if rank == 0:
    #     # print(rule_dict)
    #     for main_rule in main_rules:
    #         print(rule_dict[main_rule].get_rule_body())
    #     print(unique_dict)
    global_val.main_rules = main_rules
    global_val.unique_dict = unique_dict
    global_val.rule_dict = rule_dict
    # return main_rules, unique_dict, rule_dict  # unique_dict = {terminal_id: terminal_real_content}


def calculate_edit_distance(rank, comm, args):
    gathered_cst = combine_cst(rank, comm, args)
    # 用于计算最小编辑距离
    all_cfg = serialize_cfg_for_edit_distance(gathered_cst, comm)
    editDistance.parse_cfg_lists(all_cfg, args.outprefix + "res_of_tatio.log", rank, comm.Get_size(), comm)
