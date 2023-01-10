non_pn = [False for _ in range(10000+1)]
non_pn[0] = non_pn[1] = True

def pn_chekcer(n):
    for i in range(2, n+1):
        if non_pn[i] == True:
            continue
        for j in range(2, n//i+1):
            non_pn[i*j] = True

pn_chekcer(10000)

t = int(input())
for _ in range(t):
    n = int(input())
    for i in range(n//2, 1, -1):
        if non_pn[i] != True:
            if non_pn[n - i] != True:
                print(i, n-i, sep=' ')
                break