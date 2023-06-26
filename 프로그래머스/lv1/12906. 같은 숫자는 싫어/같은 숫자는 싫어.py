def solution(arr):
    answer = []
    for i in arr:
        if len(answer) != 0 and answer[len(answer)-1] != i:
            answer.append(i)
        elif len(answer) == 0:
            answer.append(i)
    return answer