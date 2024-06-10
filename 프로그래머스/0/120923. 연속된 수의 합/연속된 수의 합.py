def solution(num, total):
    mid = total // num
    st = mid - (num - 1) // 2
    return list(range(st, st + num))