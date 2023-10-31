def solution(lottos, win_nums):
    wild = lottos.count(0)
    inter = len(set(lottos) & set(win_nums))
    high = wild + inter
    return [7 - (1 if high == 0 else high), 7 - (1 if inter == 0 else inter)]