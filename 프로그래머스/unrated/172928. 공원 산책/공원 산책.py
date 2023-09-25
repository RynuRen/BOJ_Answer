def solution(park, routes):
    w = len(park[0])
    h = len(park)
    di = {'N':[-1,0], 'S':[1,0], 'W':[0,-1], 'E':[0,1]}
    # 시작점 찾기
    for i in range(h):
        for j in range(w):
            if park[i][j] == 'S':
                x, y = i, j
                break
    for i in routes:
        d, n = i.split()
        to_x, to_y = di[d][0], di[d][1]
        x_, y_ = x, y
        # 이동중 조건 검사
        for j in range(int(n)):
            x_ += to_x
            y_ += to_y
            if 0 <= x_ <= h-1 and 0 <= y_ <= w-1:
                if park[x_][y_] == 'X':
                    break
                continue
            else:
                break
        else:
            # 좌표 갱신
            x, y = x_, y_
    return [x, y]