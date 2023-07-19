# import math

# def solution(n, m):
#     return [math.gcd(n, m), (n*m)//math.gcd(n, m)]

def GCD(n, m):
    while(m):
        n, m = m, n % m
    return n

def solution(n, m):
    gcd = GCD(n, m)
    return [gcd, (n * m)//gcd]