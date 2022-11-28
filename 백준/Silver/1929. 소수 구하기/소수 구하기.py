m, n = map(int, input().split())

non_pn = [0 for i in range(n+1)]
non_pn[0] = non_pn[1] = 1
for i in range(2, n+1):
    for j in range(2, n//i+1):
        non_pn[i*j] = 1
            
for i in range(m, n+1):
    if non_pn[i] != 1:
        print(i)