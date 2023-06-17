def solution(players, callings):
    dic = {k:v for v,k in enumerate(players)}
    for name in callings:
        idx = dic[name]
        players[idx - 1], players[idx] = players[idx], players[idx - 1]
        dic[name] -= 1
        dic[players[idx]] += 1
    return players