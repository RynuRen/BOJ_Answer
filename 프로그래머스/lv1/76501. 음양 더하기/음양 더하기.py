def solution(absolutes, signs):
    answer = 0
    for s, i in zip(signs, absolutes):
        if s:
            answer += i
        else:
            answer -= i
    return answer