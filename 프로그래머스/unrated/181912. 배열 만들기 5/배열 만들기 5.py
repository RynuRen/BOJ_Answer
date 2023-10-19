def solution(intStrs, k, s, l):
    answer = []
    for i in intStrs:
        j = int(i[s:s+l])
        if j > k:
            answer.append(j)
    return answer