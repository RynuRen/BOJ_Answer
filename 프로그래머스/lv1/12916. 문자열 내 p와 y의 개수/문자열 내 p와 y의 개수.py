from collections import Counter

def solution(s):
    dic = Counter(s.lower())
    return True if dic['p'] == dic['y'] else False