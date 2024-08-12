k, n, m = map(int, input().split())
money = k * n - m
print(money if money > 0 else 0)