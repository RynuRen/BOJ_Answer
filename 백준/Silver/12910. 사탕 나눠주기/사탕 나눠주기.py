from collections import Counter

n = int(input())
candies = list(map(int, input().split()))
c = Counter(candies)

cnt = 0
for i in range(1, max(candies)+1):
    if not c[i]:
        break
    tmp = 1
    for j in range(1, i+1):
        tmp *= c[j]
    cnt += tmp
print(cnt)