m, n = map(int, input().split())

pn = [True for _ in range(n+1)]
for i in range(2, n+1):
    if pn:
        for j in range(i+i, n+1, i):
            pn[j] = False
            
for i in range(m, n+1):
    if pn[i] and i != 1:
        print(i)