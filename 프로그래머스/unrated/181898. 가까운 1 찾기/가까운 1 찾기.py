def solution(arr, idx):
    for i, el in enumerate(arr[idx:]):
        if el == 1:
            return idx + i
    return -1