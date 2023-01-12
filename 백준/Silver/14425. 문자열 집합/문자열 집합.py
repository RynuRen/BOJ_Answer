import sys
input = sys.stdin.readline

def bin_ser(tar, end):
    global cnt
    start, mid = 0, 0
    while start <= end:
        mid = (start+end)//2
        if s[mid] == tar:
            cnt += 1
            break
        elif s[mid] > tar:
            end = mid - 1
        else:
            start = mid + 1

n, m = map(int, input().split())
s = [input() for _ in range(n)]
s.sort()

cnt = 0
for _ in range(m):
    bin_ser(input(), n-1)
print(cnt)