def solution(arr):
    n = 0
    while len(arr) > 2 ** n:
        n += 1
    z = (2 ** n) - len(arr)
    arr.extend([0] * z)
    return arr