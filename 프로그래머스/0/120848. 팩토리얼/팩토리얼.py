def factorial(n):
    if n == 1:
        return 1
    else:
        return factorial(n - 1) * n

def solution(n):
    k = 1
    while True:
        if factorial(k) > n:
            return k - 1
        else:
            k += 1