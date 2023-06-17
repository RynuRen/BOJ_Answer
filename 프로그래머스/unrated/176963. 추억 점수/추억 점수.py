def solution(name, yearning, photo):
    dic = {k:v for k, v in zip(name, yearning)}
    answer = []
    for ns in photo:
        score = 0
        for n in ns:
            try:
                score += dic[n]
            except:
                continue
        answer.append(score)
    return answer