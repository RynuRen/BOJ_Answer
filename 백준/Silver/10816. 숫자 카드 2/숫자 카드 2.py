import sys, bisect
input = sys.stdin.readline

n = int(input())
N = list(map(int, input().split()))
N.sort()

m = int(input())
M = list(map(int, input().split()))

for i in M:
    print(bisect.bisect(N, i) - bisect.bisect_left(N, i), end=' ')