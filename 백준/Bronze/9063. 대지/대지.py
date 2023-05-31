n = int(input())
xmax, xmin = -10000, 10000
ymax, ymin = -10000, 10000
for _ in range(n):
    x, y = map(int, input().split())
    if x > xmax:
        xmax = x
    if x < xmin:
        xmin = x
    if y > ymax:
        ymax = y
    if y < ymin:
        ymin = y
if n == 1:
    area = 0
else:
    area = (xmax - xmin) * (ymax - ymin)
print(area)