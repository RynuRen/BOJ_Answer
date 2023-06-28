import sys, decimal
input = sys.stdin.readline

context = decimal.getcontext()
context.rounding = decimal.ROUND_HALF_UP

t = int(input())
for i in range(t):
    nums = list(map(int, input().split()))
    avg = sum(nums[1:])/nums[0]
    cnt = 0
    for score in nums[1:]:
        if score > avg:
            cnt += 1
    result = cnt/nums[0]*100
    print(f"{round(result, 3):.3f}%")