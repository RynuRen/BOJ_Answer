non_pn = [0 for _ in range(2*123456+1)]
non_pn[0] = non_pn[1] = 1

def pn_chekcer(n):
    for i in range(2, 2*n+1):
        if non_pn[i] == 1:
            continue
        for j in range(2, 2*n//i+1):
            non_pn[i*j] = 1
            
pn_chekcer(123456)

while True:
    n = int(input())
    if n == 0:
        break
    cnt = 0
    for i in range(n+1, 2*n+1):
        if non_pn[i] != 1:
            cnt += 1
    print(cnt)
    