# def solution(i, j, k):
#     return ''.join(map(str, [*range(i, j + 1)])).count(str(k))

def solution(i, j, k):
    return sum([str(l).count(str(k)) for l in range(i, j + 1)])