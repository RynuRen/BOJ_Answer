def solution(board, k):
    answer = 0
    for i in range(len(board)):
        for j in range(min(k - i + 1, len(board[i]))):
            answer += board[i][j]
    return answer