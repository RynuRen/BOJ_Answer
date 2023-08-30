def solution(arr, k):
    answer = sorted(set(arr), key=lambda x: arr.index(x))[:k]
    return answer + [-1] * (k - len(answer))