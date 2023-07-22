def solution(n, arr1, arr2):
    answer = []
    for i in zip(arr1, arr2):
        binmap = format((i[0] | i[1]), 'b').zfill(n)
        answer.append(''.join(['#' if int(j) else ' ' for j in binmap]))
    return answer