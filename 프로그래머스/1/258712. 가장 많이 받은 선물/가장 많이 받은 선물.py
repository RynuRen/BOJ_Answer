from collections import defaultdict
from itertools import combinations

def solution(friends, gifts):
    gift_db = {k: {"indice": 0, "comb": defaultdict(int), "pred": 0} for k in friends}

    for g in gifts:
        f, t = g.split()
        # 선물 지수 계산
        gift_db[f]["indice"] += 1
        gift_db[t]["indice"] -= 1

        # 선물 내역
        gift_db[f]["comb"][t] += 1
        gift_db[t]["comb"][f] -= 1

    # 받을 선물 계산
    for comb in combinations(friends, 2):
        if gift_db[comb[0]]["comb"][comb[1]] > 0:
            gift_db[comb[0]]["pred"] += 1
        elif gift_db[comb[0]]["comb"][comb[1]] < 0:
            gift_db[comb[1]]["pred"] += 1
        else:
            if gift_db[comb[0]]["indice"] > gift_db[comb[1]]["indice"]:
                gift_db[comb[0]]["pred"] += 1
            elif gift_db[comb[0]]["indice"] < gift_db[comb[1]]["indice"]:
                gift_db[comb[1]]["pred"] += 1
    return max([gift_db[f]["pred"] for f in friends])