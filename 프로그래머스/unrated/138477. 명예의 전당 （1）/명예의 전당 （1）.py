def solution(k, score):
    answer = []
    honor = []
    for s in score:
        if len(honor) == k:
            if honor[0] < s:
                honor[0] = s
        else:
            honor.append(s)
        honor.sort()
        answer.append(honor[0])
    return answer