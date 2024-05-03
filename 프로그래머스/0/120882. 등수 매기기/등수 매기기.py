def solution(score):
    tmp = [(e + m) / 2 for e, m in score]
    return [sorted(tmp, reverse=True).index(el) + 1 for el in tmp]