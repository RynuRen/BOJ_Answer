import sys
input = sys.stdin.readline
t = int(input())
for i in range(t):
    nums = list(map(int, input().split()))
    avg = sum(nums[1:])/nums[0]
    cnt = 0
    for score in nums[1:]:
        if score > avg:
            cnt += 1
    print(f"{cnt/nums[0]*100:.3f}%")