import sys
input = sys.stdin.readline

def bin_seek_low(tar, end):
    start = 0
    while start < end:
        mid = (start + end) // 2
        if N[mid] >= tar:
            end = mid
        else:
            start = mid + 1
    return start

def bin_seek_up(tar, end):
    start = 0
    while start < end:
        mid = (start + end) // 2
        if N[mid] > tar:
            end = mid
        else:
            start = mid + 1
    return start

n = int(input())
N = list(map(int, input().split()))

N.sort()

m = int(input())
M = list(map(int, input().split()))

for i in M:
    print(bin_seek_up(i, n) - bin_seek_low(i, n), end=' ')