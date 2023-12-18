def solution(common):
    fst, snd, trd = common[:3]
    if trd - snd == snd - fst:
        return common[-1] + (snd - fst)
    else:
        return common[-1] * (snd // fst)