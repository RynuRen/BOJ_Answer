def solution(dots):
    dots.sort()
    return (dots[0][0] - dots[3][0]) * (dots[0][1] - dots[3][1])