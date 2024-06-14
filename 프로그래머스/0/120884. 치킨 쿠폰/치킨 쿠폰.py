def solution(chicken):
    answer = 0
    while chicken >= 10:
        d = chicken // 10
        m = chicken % 10
        answer += d
        chicken = d + m
    return answer