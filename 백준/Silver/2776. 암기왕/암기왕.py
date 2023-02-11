import sys
input = sys.stdin.readline

def binsec(arr, target, start, end):
    if start > end:
        return 0
    mid = (start + end) // 2
    if arr[mid] == target:
        return 1
    elif arr[mid] > target:
        return binsec(arr, target, start, mid -1)
    else:
        return binsec(arr, target, mid+1, end)

T = int(input())
while T:
    T -= 1
    n = int(input())
    N = sorted(map(int, input().split()))
    m = int(input())
    M = map(int, input().split())

    for num in M:
        print(binsec(N, num, 0, n-1))