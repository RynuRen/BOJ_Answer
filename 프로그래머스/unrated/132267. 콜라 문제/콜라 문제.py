def solution(a, b, n):
    cnt = 0
    while n//a:
        cnt += n//a*b
        n = n%a + n//a*b
    return cnt