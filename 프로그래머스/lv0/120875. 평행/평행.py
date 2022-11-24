def solution(dots):
    # x축 또는 y축과 평행한 경우 없음(x1-xn!=0,y1-yn!=0)
    a = [i - j for i, j in zip(dots[0], dots[1])]
    b = [i - j for i, j in zip(dots[2], dots[3])]
    if a[1]/a[0] == b[1]/b[0]:
        return 1
    
    a = [i - j for i, j in zip(dots[0], dots[2])]
    b = [i - j for i, j in zip(dots[1], dots[3])]
    if a[1]/a[0] == b[1]/b[0]:
        return 1
    
    a = [i - j for i, j in zip(dots[0], dots[3])]
    b = [i - j for i, j in zip(dots[1], dots[2])]
    if a[1]/a[0] == b[1]/b[0]:
        return 1

    return 0