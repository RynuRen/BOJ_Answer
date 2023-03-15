n, k = map(int, input().split())
eratos = {}
for i in range(2, n+1):
    for j in range(1, n//i+1):
        if i*j not in eratos:
            eratos[i*j] = 0
print(list(eratos.keys())[k-1])
