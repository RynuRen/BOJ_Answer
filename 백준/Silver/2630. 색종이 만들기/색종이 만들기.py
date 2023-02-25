import sys
input = sys.stdin.readline

def quad(x, y, length):
    color = paper[y][x]
    for i in range(y, y+length):
        for j in range(x, x+length):
            if paper[i][j] != color:
                break
        else:
            continue
        break
    else:
        global white, blue
        if color == 0:
            white += 1
        else:
            blue += 1
        return
    mid = length//2
    quad(x, y, mid)
    quad(x, y+mid, mid)
    quad(x+mid, y, mid)
    quad(x+mid, y+mid, mid)

n = int(input())
paper = [list(map(int, input().split())) for _ in range(n)]
white = 0
blue = 0

quad(0, 0, n)
print(white, blue, sep='\n')