import sys
input = sys.stdin.readline
n = int(input())
xy = []
for _ in range(n):
    x, y = map(int, input().split())
    xy.append((x, y))
xy.sort(key = lambda x:(x[1], x[0]))
for i in xy:
    print(*i)