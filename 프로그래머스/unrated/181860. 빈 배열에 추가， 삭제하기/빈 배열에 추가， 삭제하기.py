def solution(arr, flag):
    answer = []
    for i, j in zip(arr, flag):
        if j:
            answer.extend([i] * i * 2)
        else:
            answer = answer[:-i]
    return answer