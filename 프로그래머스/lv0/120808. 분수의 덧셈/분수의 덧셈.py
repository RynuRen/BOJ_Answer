def gcd(a, b):
    while a % b != 0:
        mod = a % b
        a = b
        b = mod
    return b

def solution(denum1, num1, denum2, num2):
    y = num1 * num2
    x = denum1 * num2 + denum2 * num1
    g = gcd(x, y)
    y //= g
    x //= g
    answer = [x, y]
    return answer