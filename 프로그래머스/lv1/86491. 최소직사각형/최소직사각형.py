def solution(sizes):
    sizes = [sorted(s) for s in sizes]
    x, y = list(zip(*sizes))
    return sorted(x)[-1] * sorted(y)[-1]