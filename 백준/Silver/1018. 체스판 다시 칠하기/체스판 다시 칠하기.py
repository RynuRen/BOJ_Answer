n, m = map(int, input().split())
board = []
for _ in range(n):
    board.append(input())

minPaint = 65
for a in range(n-7): # 판 가로 자르기
    for b in range(m-7): # 판 세로 자르기
        startB, startW = 0, 0 # BWBW.., WBWB..
        for i in range(a,a+8):
            for j in range(b,b+8):
                if (i+j)%2 == 0: # 첫 블럭과 같은색
                    if board[i][j] != 'B':
                        startB += 1
                    else:
                        startW += 1
                else:
                    if board[i][j] != 'W':
                        startB += 1
                    else:
                        startW += 1
        minPaint = min(minPaint, startB, startW)
print(minPaint)