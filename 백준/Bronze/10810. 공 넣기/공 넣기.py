n, m = map(int, input().split())
burket = [0] * n
for _ in range(m):
    i, j, k = map(int, input().split())
    for num in range(i, j+1):
        burket[num-1] = k
print(*burket)