def solution(num, k):
    idx = str(num).find(str(k)) + 1
    return idx if idx else -1