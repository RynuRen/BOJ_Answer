def solution(n):
    if n == 1:
        return [[1]]
    answer = [[0] * n for i in range(n)]
    x, y = 0, 0
    flag = 'e'
    for i in range(n ** 2):
        answer[x][y] = i + 1
        if flag == 'e':
            y += 1
            if y == n - 1 or answer[x][y + 1]:
                flag = 's'
        elif flag == 's':
            x += 1
            if x == n - 1 or answer[x + 1][y]:
                flag = 'w'
        elif flag == 'w':
            y -= 1
            if y == 0 or answer[x][y - 1]:
                flag = 'n'
        else:
            x -= 1
            if x == 0 or answer[x - 1][y]:
                flag = 'e'
    return answer