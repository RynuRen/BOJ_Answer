def line(dot1, dot2): 
    return sum([(i - j) ** 2 for i, j in zip(dot1, dot2)]) ** 0.5

def solution(dots):
    dots.sort()
    l1 = line(dots[0], dots[1])
    l2 = line(dots[0], dots[2])
    return int(l1 * l2)