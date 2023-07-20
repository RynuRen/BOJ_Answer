def solution(d, budget):
    d.sort()
    cnt = 0
    for i in d:
        if i > budget:
            break
        budget -= i
        cnt += 1
    return cnt