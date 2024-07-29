def solution(board):
    d = [-1, 0, 1]
    tmp_board = [row[:] for row in board]
    for i in range(len(board)):
        for j in range(len(board[0])):
            if board[i][j] == 1:
                for k in d:
                    for l in d:
                        if 0 <= i - k < len(board) and 0 <= j - l < len(board[0]):
                            tmp_board[i-k][j-l] = "x"
    return sum(val == 0 for row in tmp_board for val in row)