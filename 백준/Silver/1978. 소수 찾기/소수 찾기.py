non_pn = [0, 1]
for i in range(2, 1001):
    if i not in non_pn:
        for j in range(2, 1000 // i + 1):
            non_pn.append(i * j)

n = int(input())
nums = list(map(int, input().split()))
cnt = 0
for num in nums:
    if num not in non_pn:
        cnt += 1
print(cnt)