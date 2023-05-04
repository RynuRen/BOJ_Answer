n = int(input())
m = 2 * n - 1
for i in range(m):
    if i > n - 1:
        i = m - 1 - i
    for j in range(m):
        if j < abs(n - 1 - i):
            print(' ', end='')
        elif j > n - 1 + i:
            continue
        else:
            print('*', end='')
    print()