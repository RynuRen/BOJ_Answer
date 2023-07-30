def solution(n, lost, reserve):
    lost, reserve = set(lost), set(reserve)
    _lost = lost - reserve
    _reserve = reserve - lost
    
    for r in _reserve:
        front = r - 1
        back = r + 1
        if front in _lost:
            _lost.remove(front)
        elif back in _lost:
            _lost.remove(back)
    return n - len(_lost)