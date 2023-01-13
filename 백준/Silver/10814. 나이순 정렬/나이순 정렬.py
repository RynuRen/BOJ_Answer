import sys
input = sys.stdin.readline

n = int(input())
mems = []
for _ in range(n):
    mem = input().split()
    mem[0] = int(mem[0])
    mems.append(mem)

mems.sort(key=lambda x:x[0])
for i in range(n):
    print(mems[i][0], mems[i][1], sep=' ')