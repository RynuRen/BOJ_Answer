def solution(arr, idx):
    answer = -1
    for i, el in enumerate(arr[idx:]):
        if el == 1:
            answer = idx + i
            break
    return answer