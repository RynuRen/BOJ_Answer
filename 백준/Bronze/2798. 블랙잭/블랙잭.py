n, m = map(int, input().split())
card = list(map(int, input().split()))

maxi = 0
for i in range(n-2):
    for j in range(i+1, n-1):
        for k in range(j+1, n):
            total = card[i] + card[j] + card[k]
            if total <= m and total > maxi:
                maxi = total
print(maxi)