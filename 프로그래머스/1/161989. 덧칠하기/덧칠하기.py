def solution(n, m, section):
    cnt = 0
    tmp = 0
    for i in section:
        if tmp < i:
            tmp = i + m - 1
            cnt += 1
    return cnt