import sys
input = sys.stdin.readline
n = input()
if int(n) < 10:
    n = str(0)+n
new = n
cnt = 0
while True:
    rst = str(int(new[0])+int(new[1]))
    if int(rst) < 10:
        rst = str(0)+rst
    new = new[1] + rst[1]
    cnt += 1
    if int(new) == int(n):
        break
print(cnt)