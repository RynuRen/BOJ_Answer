flat = [[0]*100 for _ in range(100)]
rst = 0
for _ in range(4):
    lx, ly, hx, hy = map(int, input().split())
    for i in range(lx, hx):
        for j in range(ly, hy):
            if flat[i][j] != 1:
                flat[i][j] = 1
                rst += 1
print(rst)