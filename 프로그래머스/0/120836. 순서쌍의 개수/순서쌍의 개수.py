def solution(n):
    count = 0
    half = n ** 0.5
    if half.is_integer():
        count += 1
        half -= 1
    for i in range(1, int(half) + 1):
        if n % i == 0:
            count += 2
    return count