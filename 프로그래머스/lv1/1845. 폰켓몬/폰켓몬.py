def solution(nums):
    pick = len(nums)//2
    kinds = len(set(nums))
    return min(pick, kinds)