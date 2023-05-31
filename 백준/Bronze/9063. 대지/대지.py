import sys
input = sys.stdin.readline

n = int(input())
xlist = []
ylist = []
for _ in range(n):
    x, y = map(int, input().split())
    xlist.append(x)
    ylist.append(y)
area = (max(xlist) - min(xlist)) * (max(ylist) - min(ylist))
print(area)