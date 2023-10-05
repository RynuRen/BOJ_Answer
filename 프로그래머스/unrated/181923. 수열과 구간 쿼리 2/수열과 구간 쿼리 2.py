def solution(arr, queries):
    answer = []
    for s, e, k in queries:
        a = arr[s:e+1]
        m = max(a)
        if m <= k:
            answer.append(-1)
        else:
            for i in a:
                if i > k:
                    m = min(m, i)
            answer.append(m)
    return answer