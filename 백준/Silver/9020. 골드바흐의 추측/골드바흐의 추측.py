non_pn = [0 for _ in range(10000+1)]
non_pn[0] = non_pn[1] = 1

def pn_chekcer(n):
    for i in range(2, n+1):
        if non_pn[i] == 1:
            continue
        for j in range(2, n//i+1):
            non_pn[i*j] = 1

pn_chekcer(10000)

t = int(input())
for _ in range(t):
    n = int(input())
    for i in range(n//2, 1, -1):
        if non_pn[i] != 1:
            if non_pn[n - i] != 1:
                print(i, n-i, sep=' ')
                break