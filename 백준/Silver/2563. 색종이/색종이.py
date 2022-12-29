paper = [[0 for _ in range(100)] for _ in range(100)]
# paper = [[0] * 100 for _ in range(100)]

result = 0
num = int(input())
for _ in range(num):
    x, y = map(int, input().split())
    for i in range(x, x+10):
        for j in range(y, y+10):
            if paper[i][j] != 1:
                paper[i][j] = 1
                result += 1
print(result)