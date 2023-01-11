import sys
input = sys.stdin.readline

n = int(input())
coors = []
for _ in range(n):
    coors.append(list(map(int, input().split())))

coors.sort(key=lambda x:(x[0], x[1]))

for i in range(n):
    print(*coors[i])