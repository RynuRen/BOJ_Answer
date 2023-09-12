def solution(arr):
    cnt = 0
    _arr = []
    while True:
        _arr = [i // 2 if i >= 50 and i % 2 == 0 else i * 2 + 1 if i < 50 and i % 2 != 0 else i for i in arr]
        if arr == _arr:
            break
        cnt += 1
        arr, _arr = _arr, arr
    return cnt