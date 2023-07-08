from collections import Counter

def solution(s):
    dic = Counter(s.lower())
    return dic['p'] == dic['y']