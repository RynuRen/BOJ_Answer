def solution(keyinput, board):
    dmap = {"up":[0, 1], "down":[0, -1], "left":[-1, 0], "right":[1, 0]}
    x_lim, y_lim = board[0]//2, board[1]//2
    loc = [0, 0]
    for key in keyinput:
        new_x = loc[0] + dmap[key][0]
        new_y = loc[1] + dmap[key][1]
        if abs(new_x) <= x_lim and abs(new_y) <= y_lim:
            loc = [new_x, new_y]
    return loc