import math

def solution(a, b):
    b //= math.gcd(a, b)
    for i in [2, 5]:
        while not b % i:
             b //= i
    return 1 if b == 1 else 2