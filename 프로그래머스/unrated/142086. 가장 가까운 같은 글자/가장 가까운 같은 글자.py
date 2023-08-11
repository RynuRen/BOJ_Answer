def solution(s):
    answer = []
    forward = ''
    for i in s:
        tmp = forward.find(i)
        answer.append(tmp if tmp < 0 else tmp + 1)
        forward = str(i) + forward
    return answer