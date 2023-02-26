n, m = map(int, input().split())
bk = []
for i in range(n):
    bk.append(i+1)
for _ in range(m):
    i, j = map(int, input().split())
    if i == 1:
        bk[:j] = bk[j-1::-1]
    else:
        bk[i-1:j] = bk[j-1:i-2:-1]
print(*bk)