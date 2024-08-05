h, m, s = list(map(int, input().split()))
cook = int(input())
ts = h * 60 * 60 + m * 60 + s + cook
s = ts % 60
m = ts // 60 % 60
h = ts // 60 // 60 % 24
print(h, m, s)