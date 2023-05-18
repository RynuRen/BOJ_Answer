coin = [25, 10, 5, 1]
t = int(input())
for _ in range(t):
    c = int(input())
    change = [0, 0, 0, 0]
    for i in range(4):
        change[i] = c // coin[i]
        c %= coin[i]
    print(*change)