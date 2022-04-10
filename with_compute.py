import copy
from math import log2
from statistics import mean
from constant import ABSOLUTE_DELTA, CYC_SIMILARITY, PERFORMANCE_DIM, SIMILARITY, TWO_EVENTS_TRACE_SUFFIX, \
    FOUR_EVENTS_TRACE_SUFFIX, TRACE_SUFFIX, THRESHOLD
import global_val


def isSimilar(values1, values2):
    if abs(values1[0] - values2[0]) / mean([values1[0], values2[0]+1]) > SIMILARITY and abs(
            values1[0] - values2[0]) > ABSOLUTE_DELTA:
        return False
    if abs(values1[1] - values2[1]) / mean([values1[1], values2[1]+1]) > SIMILARITY and abs(
            values1[1] - values2[1]) > ABSOLUTE_DELTA:
        return False
    if abs(values1[2] - values2[2]) / mean([values1[2], values2[2]+1]) > SIMILARITY and abs(
            values1[2] - values2[2]) > ABSOLUTE_DELTA:
        return False
    if abs(values1[3] - values2[3]) / mean([values1[3], values2[3]+1]) > CYC_SIMILARITY and abs(
            values1[3] - values2[3]) > ABSOLUTE_DELTA:
        return False
    if abs(values1[4] - values2[4]) / mean([values1[4], values2[4]+1]) > SIMILARITY and abs(
            values1[4] - values2[4]) > ABSOLUTE_DELTA:
        return False
    if abs(values1[5] - values2[5]) / mean([values1[5], values2[5]+1]) > SIMILARITY and abs(
            values1[5] - values2[5]) > ABSOLUTE_DELTA:
        return False
    return True


def redirectList(redirect, src, dst):
    return {val: dst if redirect[val] == src else redirect[val] for val in redirect}


# values: [int]
def dataHandler(values):
    afterHandle = [int(val / 1000) * 1000 for val in values]
    afterHandle[3] = int(values[3] / 1000) * 1000
    return tuple(afterHandle)


# 找到一个不属于当前字典的key
def findAKey(bucket: dict) -> int:
    for i in range(max(bucket.keys())):
        if i not in bucket.keys():
            return i
    return max(bucket.keys())+1


def weightMergeBucket(bucket1, bucket2, count1, count2):
    mergedBucket = [0,0,0,0,0,0]
    for i in range(PERFORMANCE_DIM):
        mergedBucket[i] = int((bucket1[i]*count1+bucket2[i]*count2)/(count1+count2))
    return mergedBucket


def mergeBucket(data1: dict, data2: dict) -> dict:
    # 合并两份数据，首先合并bucket
    bucket1 = data1["bucket"]
    bucket2 = data2["bucket"]
    bucket = copy.copy(bucket2)
    requestDict1 = data1['requestDict']
    requestDict2 = data2['requestDict']
    res_requestDict = copy.copy(requestDict2)

    oldPerformaceDict = data1["performanceDict"]
    newPerformanceDict = data2["performanceDict"].copy()
    mergeLog = {}
    for key1 in bucket1.keys():
        find = False
        for key2 in bucket.keys():
            if isSimilar(bucket1[key1], bucket[key2]):
                mergeLog[key1] = key2
                bucket[key2] = weightMergeBucket(bucket1[key1], bucket[key2], oldPerformaceDict[key1], newPerformanceDict[key2])
                newPerformanceDict[key2] += oldPerformaceDict[key1]
                find = True
                break
        if not find:
            key = findAKey(bucket)
            mergeLog[key1] = key
            bucket[key] = bucket1[key1]
            newPerformanceDict[key] = oldPerformaceDict[key1]

    for key in requestDict1.keys():
        find = False
        if key in res_requestDict.keys():
            pass
        else:
            res_requestDict[key] = len(res_requestDict)


    mergeDicts = []
    for mergeDict in data1['mergeDicts']:
        mergeDicts.append({key: mergeLog[mergeDict[key]] for key in mergeDict.keys()})
    for mergeDict in data2['mergeDicts']:
        mergeDicts.append(mergeDict)

    return {"bucket": bucket, "performanceDict": newPerformanceDict, 'mergeDicts': mergeDicts, 'requestDict': res_requestDict}


def allGather(comm, rank, performanceDict, bucket):
    # 把信息汇总起来，再压缩一次
    # 每个进程需要向上报告，自己执行计算代码块的顺序编号，redirect数组，执行代码块压缩之后的情况
    data = {
        "performanceDict": performanceDict,
        "bucket": bucket,
        'mergeDicts': [{key: key for key in bucket.keys()}],
        'requestDict': global_val.requestDict
    }
    # 多路并行处理，树形处理方式，假定总共有2**n个进程，第i轮向rank
    size = comm.size
    epoch = int(log2(size))
    # if rank == 0:
        # print("epoch=", epoch)
    for i in range(epoch):
        mid = 2**i
        modNum = 2**(i+1)
        if rank%modNum == mid:
            comm.send(data, dest=rank-mid)
            # print(rank, "send data to ", rank-mid)
        elif rank%modNum == 0:
            data2 = comm.recv(source=rank+mid)
            # print(rank, "recv data from ", rank+mid)
            data = mergeBucket(data, data2)


    data = comm.bcast(data, root=0)
    # if rank == 0:
    #     print(data["bucket"])
    #     print(len(data["blockList"]))
    return data


def computeBlockHash(filename):
    f = open(filename, "r")
    line = f.readline()
    performanceDict = {}
    bucket = {}  # dict { (performance tuple): [这个bucket的计数, 这个bucket的代号] }
    lineCount = 0  # 用来对总的行数进行记录，并无实际作用，只是用来对比一下数据
    bucketCount = 0  # 用来记录已经用了多少个bucket了
    blockList = []  # 用来存储聚类之后的block的序列信息，只保存对应的代号
    bucketDict = {}  # dict { bucket代号: [performance tuple] }
    requestDict = {} # dict { request_addr: request_id }

    while line:
        if "MPI_Compute" in line:
            line = line.strip()
            s = line.split(',')[2]
            s = s.split(';')[:6]
            values = [int(val) for val in s]
            afterHandle = dataHandler(values)
            if afterHandle in bucket:
                # bucketDict中对应的元素加权求平均
                temp = (bucketDict[bucket[afterHandle][1]])
                for i in range(len(temp)):
                    temp[i] *= bucket[afterHandle][0]
                    temp[i] += values[i]
                bucketDict[bucket[afterHandle][1]] = [int(val / (bucket[afterHandle][0] + 1)) for val in temp]
                bucket[afterHandle][0] += 1
            else:
                bucketDict[bucketCount] = values
                bucket[afterHandle] = [1, bucketCount]
                bucketCount += 1

            blockList.append(bucket[afterHandle][1])
            lineCount += 1
        else:
            s = line.split('\n')[0].split(',')
            request = s[len(s)-1]
            if request not in requestDict:
                requestDict[request] = len(requestDict)
        line = f.readline()

    # 准备返回的数据
    truncateDict = {val: bucket[val][1] for val in bucket.keys()}
    # 遍历bucket，如果LST, L1_DCM, INS, BR_CN 和 BR_MSP 都相同，只有 CYC 不同，则将他们合并
    fiveSimilar = {}
    redirect = {}  # 因为需要删除一些代号，所以需要重定向一下旧的代号 TODO 处理有问题，不影响合并代码块
    for key in bucket.keys():
        five = (key[0], key[1], key[2], key[4], key[5])
        if five in fiveSimilar:
            # 合并两个记录
            # 以第一个出现的记录为准，重定向bucketDict中的记录
            bucketDict[bucket[key][1]] = bucketDict[fiveSimilar[five]]
            # 删除后者在bucket中的记录，加权求CYC的均值
            bucketDict[fiveSimilar[five]][3] = int(
                (bucketDict[fiveSimilar[five]][3] * performanceDict[fiveSimilar[five]] + key[3] * bucket[key][0]) / (
                        performanceDict[fiveSimilar[five]] + bucket[key][0]))
            performanceDict[fiveSimilar[five]] += bucket[key][0]
            redirect[bucket[key][1]] = fiveSimilar[five]
            bucketDict.pop(bucket[key][1])
        else:
            fiveSimilar[five] = bucket[key][1]
            performanceDict[bucket[key][1]] = bucket[key][0]
            redirect[bucket[key][1]] = bucket[key][1]

    bucket = bucketDict
    preLen = 0
    while preLen != len(bucket):
        preLen = len(bucket)
        bucketDict = bucket
        bucket = {}  # 清空这个bucket回收利用一下
        # 第二次合并，一定程度上相似就合并
        for key in bucketDict.keys():
            findASimilar = False
            for other in bucket.keys():
                if isSimilar(bucket[other], bucketDict[key]):
                    # 如果找到一个不是自己，且比较相似的，则合并他们
                    for i in range(PERFORMANCE_DIM):
                        bucket[other][i] = int(
                            (bucket[other][i] * performanceDict[other] + bucketDict[key][i] * performanceDict[key]) / (
                                    performanceDict[other] + performanceDict[key]))
                    performanceDict[other] += performanceDict[key]
                    performanceDict.pop(key)
                    findASimilar = True
                    # 需要磨抹平redirect：
                    redirect = redirectList(redirect, key, other)
                    break
            if not findASimilar:
                # 没有找到就加进来
                bucket[key] = bucketDict[key]

    return truncateDict, redirect, bucket, requestDict, performanceDict
