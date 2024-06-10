def solution(num, total):
    mid = total // num
    st = mid - (num - 1) // 2
    ed = mid + num // 2 + 1
    return list(range(st, ed))