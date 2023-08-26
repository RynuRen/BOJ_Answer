def solution(strArr):
    dic = {}
    for s in strArr:
        dic[len(s)] = dic.get(len(s), 0) + 1
    return max(dic.values())