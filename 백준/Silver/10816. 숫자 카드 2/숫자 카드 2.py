from collections import Counter
import sys
input = sys.stdin.readline

_ = input()
N = [*map(int, input().split())]
_ = input()
M = [*map(int, input().split())]

cnt = Counter(N)
for num in M:
    rst = cnt.get(num)
    print(0 if rst == None else rst, end=' ')