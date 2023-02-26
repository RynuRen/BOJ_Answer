n, m = map(int, input().split())
bk = []
for i in range(n):
    bk.append(i+1)
for _ in range(m):
    i, j = map(int, input().split())
    bk[i-1], bk[j-1] = bk[j-1], bk[i-1]
print(*bk)