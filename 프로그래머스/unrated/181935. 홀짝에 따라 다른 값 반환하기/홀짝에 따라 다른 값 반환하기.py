def solution(n):
    s = 2 if n % 2 == 0 else 1
    return sum([i ** s for i in range(s, n + 1, 2)])