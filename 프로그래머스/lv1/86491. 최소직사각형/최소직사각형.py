def solution(sizes):
    sizes = [sorted(s) for s in sizes]
    x, y = list(zip(*sizes))
    return max(x) * max(y)