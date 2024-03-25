def solution(hp):
    answer = hp // 5
    answer += hp % 5 // 3
    answer += hp % 5 % 3
    return answer