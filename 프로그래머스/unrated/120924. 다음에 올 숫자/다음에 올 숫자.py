def solution(common):
    fst, snd, trd = common[0], common[1], common[2]
    if trd - snd == snd - fst:
        return common[-1] + (snd - fst)
    else:
        return common[-1] * (snd // fst)