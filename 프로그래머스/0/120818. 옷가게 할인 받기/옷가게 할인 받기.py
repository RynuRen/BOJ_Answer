def solution(price):
    if price >= 500000:
        dis = 0.2
    elif price >= 300000:
        dis = 0.1
    elif price >= 100000:
        dis = 0.05
    else:
        dis = 0
    return int(price * (1 - dis))