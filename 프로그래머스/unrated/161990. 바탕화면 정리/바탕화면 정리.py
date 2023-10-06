def solution(wallpaper):
    x, y = [], []
    lenx = len(wallpaper)
    leny = len(wallpaper[0])
    for i in range(0, lenx):
        for j in range(0, leny):
            if wallpaper[i][j] == '#':
                x.append(i)
                y.append(j)
    return [min(x), min(y), max(x) + 1, max(y) + 1]