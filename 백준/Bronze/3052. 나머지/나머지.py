nums = []
for i in range(10):
    nums.append(int(input())%42)
mod = set(nums)
print(len(mod))