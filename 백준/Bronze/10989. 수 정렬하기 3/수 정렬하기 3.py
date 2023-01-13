import sys
input = sys.stdin.readline

n = int(input())
count = [0] * (10000+1)
for _ in range(n):
    num = int(input())
    count[num] += 1

for n in range(10000+1):
    while count[n] != 0:
        print(n, end=' ')
        count[n] -= 1