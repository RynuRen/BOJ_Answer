def solution(n):
    answer = [[0] * n for i in range(n)]
    for i, a in enumerate(answer):
        a[i] = 1
    return answer