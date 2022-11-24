m = int(input())
n = int(input())

non_pn = [0, 1]
for i in range(2, n+1):
    if i not in non_pn:
        for j in range(2, n // i + 1):
            non_pn.append(i * j);

pn = []
for i in range(m, n+1):
    if i not in non_pn:
        pn.append(i)
if len(pn) == 0:
    print(-1)
else:
    print(sum(pn))
    print(min(pn))