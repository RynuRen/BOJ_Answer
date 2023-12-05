def solution(a, b):
    a1 = a % 2
    b1 = b % 2
    if a1 and b1:
        answer = a ** 2 + b ** 2
    elif a1 or b1:
        answer = 2 * (a + b)
    else:
        answer = abs(a - b)
    return answer