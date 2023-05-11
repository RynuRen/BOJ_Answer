board = []
for _ in range(5):
    board.append(input())
for j in range(15):
    for i in range(5):
        try:
            print(board[i][j], end='')
        except:
            continue