from collections import deque

def element_check(arr):
    for i in range(len(arr)-1):
        if arr[i] == arr[i+1]:
            return i

def solution(board, moves):
    rowlen = len(board[0])
    newb = [deque() for _ in range(rowlen + 1)]
    
    for row in board:
        for i in range(rowlen):
            if row[i] == 0:
                continue
            newb[i+1].append(row[i])
            
    basket = []
    for i in moves:
        if newb[i]:
            basket.append(newb[i].popleft())
    answer = 0
    while True:
        i = element_check(basket)
        if not isinstance(i, int):
            break
        del basket[i:i+2]
        answer += 2
    return answer