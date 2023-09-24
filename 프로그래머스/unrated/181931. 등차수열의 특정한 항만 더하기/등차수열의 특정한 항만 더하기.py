def solution(a, d, included):
    answer = 0
    for n, t in zip([a + d * i for i in range(len(included))], included):
        if t:
            answer += n
    return answer