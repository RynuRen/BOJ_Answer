n, m = map(int, input().split())
burket = [0] * n
for _ in range(m):
    i, j, k = map(int, input().split())
    for num in range(i-1, j):
        burket[num] = k
print(*burket)