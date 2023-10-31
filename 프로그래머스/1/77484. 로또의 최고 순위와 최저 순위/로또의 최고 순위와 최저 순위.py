def solution(lottos, win_nums):
    rank = [6, 6, 5, 4, 3, 2 ,1]
    wild = lottos.count(0)
    inter = len(set(lottos) & set(win_nums))
    return [rank[wild + inter], rank[inter]]