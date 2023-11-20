def solution(rank, attendance):
    answer = 0
    lst = []
    for i in range(len(rank)):
        if attendance[i]:
            lst.append((rank[i], i))
    rerank = [i[1] for i in sorted(lst, key=lambda x:x[0], reverse=True)][-3:]
    for i, r in enumerate(rerank):
        answer += 100**i * r
    return answer