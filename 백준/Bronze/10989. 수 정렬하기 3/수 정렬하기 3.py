import sys
input = sys.stdin.readline

n = int(input())
count = {}
for _ in range(n):
    num = int(input())
    if count.get(num):
        count[num] += 1
    else:
        count[num] = 1

for n in range(max(count.keys()) + 1):
    while count.get(n) and count[n] != 0:
        print(n, end=' ')
        count[n] -= 1