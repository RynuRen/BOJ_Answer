def solution(arr1, arr2):
    a = sorted([arr1, arr2], key=lambda x:(len(x), sum(x)))
    if len(arr1) == len(arr2) and sum(arr1) == sum(arr2):
        return 0
    elif a[0] == arr1:
        return -1
    else:
        return 1