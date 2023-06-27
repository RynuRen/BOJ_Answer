def solution(board):
    r = len(board)
    c = len(board[0])
    
    # 정사각형의 우측 하단 모서리를 기준으로 가장 긴 변의 길이를 기록
    for i in range(1, r):
        for j in range(1, c):
            if board[i][j]:
                board[i][j] += min(board[i-1][j-1], board[i-1][j], board[i][j-1])
                
    # 최대 넓이
    answer = 0
    for k in board:
        answer = max(max(k), answer)
    return answer**2