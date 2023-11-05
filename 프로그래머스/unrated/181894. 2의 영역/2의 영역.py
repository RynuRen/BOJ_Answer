def solution(arr):
    tmp = []
    for i in range(len(arr)):
        if arr[i] == 2:
            tmp.append(i)            
    return [-1] if not tmp else arr[tmp[0]:tmp[-1] + 1]