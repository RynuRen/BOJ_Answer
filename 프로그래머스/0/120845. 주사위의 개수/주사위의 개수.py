from functools import reduce

def solution(box, n):
    return reduce(lambda x, y: x * y, map(lambda x: x // n, box))