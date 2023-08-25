def solution(arr, n):
    if len(arr) % 2 == 0:
        st = 1
    else:
        st = 0
    for i in range(st, len(arr), 2):
        arr[i] += n
    return arr