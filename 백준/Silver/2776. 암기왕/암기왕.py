import sys
input = sys.stdin.readline

T = int(input())
while T:
    T -= 1
    n = int(input())
    N = set(map(int, input().split()))
    m = int(input())
    M = map(int, input().split())

    for num in M:
        print(1 if num in N else 0)