from collections import Counter

# def solution(participant, completion):
#     dic = dict(Counter(completion))
#     for p in participant:
#         try:
#             if dic[p] == 0:
#                 return p
#             dic[p] -= 1
#         except KeyError:
#             return p

def solution(participant, completion):
    dic = Counter(participant) - Counter(completion)
    return list(dic)[0]