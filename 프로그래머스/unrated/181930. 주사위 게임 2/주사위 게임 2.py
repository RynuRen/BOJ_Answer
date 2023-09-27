def solution(a, b, c):
    if a == b and b == c and c == a:
        n = 4
    elif a != b and b != c and c != a:
        n = 2
    else:
        n = 3
    answer = 1
    for i in range(1, n):
        answer *= a ** i + b ** i + c ** i
    return answer