import math

n, k = map(int, input().split())

student = [[0] * 6 for _ in range(2)]
for _ in range(n):
    x, y = map(int, input().split())
    student[x][y-1] += 1

cnt = 0
for x in student:
    for y in x:
        cnt += math.ceil(y / k)
print(cnt)