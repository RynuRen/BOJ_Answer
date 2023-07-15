def solution(n):
    tmp = [1 for i in range(n+1)]
    for i in range(2, int(n**0.5)+1):
        if tmp[i]:
            for j in range(2, n//i+1):
                tmp[i*j] = 0
    cnt = 0
    for i in range(2, n+1):
        if tmp[i]:
            cnt += 1
    return cnt