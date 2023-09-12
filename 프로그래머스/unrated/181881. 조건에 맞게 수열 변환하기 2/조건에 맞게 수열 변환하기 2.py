def solution(arr):
    cnt = -1
    _arr = []
    while arr != _arr:
        _arr = [i // 2 if i >= 50 and i % 2 == 0 else i * 2 + 1 if i < 50 and i % 2 != 0 else i for i in arr]
        cnt += 1
        arr, _arr = _arr, arr
    return cnt