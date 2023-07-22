def solution(n, arr1, arr2):
    answer = []
    for i in zip(arr1, arr2):
        binmap = format((i[0] | i[1]), 'b').zfill(n)
        tmp = ''
        for j in binmap:
            tmp += '#' if int(j) else ' '
        answer.append(tmp)
    return answer