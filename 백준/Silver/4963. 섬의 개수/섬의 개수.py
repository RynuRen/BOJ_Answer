import sys
input = sys.stdin.readline
sys.setrecursionlimit(100000)

def dfs(x, y):
    dx = [0, 1, 1, 1, 0, -1, -1, -1]
    dy = [1, 1, 0, -1, -1, -1, 0, 1]

    imap[x][y] = 0
    for i in range(8):
        nx = x + dx[i]
        ny = y + dy[i]
        if 0 <= nx < h and 0 <= ny < w and imap[nx][ny] == 1:
            dfs(nx, ny)

while True:
    w, h = map(int, input().split())
    if w == 0 and h == 0:
        break    
    imap = []
    island = 0
    for _ in range(h):
        imap.append(list(map(int, input().split())))

    for i in range(h):
        for j in range(w):
            if imap[i][j] == 1:
                dfs(i, j)
                island += 1
    print(island)