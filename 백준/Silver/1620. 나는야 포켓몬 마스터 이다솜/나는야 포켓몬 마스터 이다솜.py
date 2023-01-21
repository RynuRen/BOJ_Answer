import sys
input = sys.stdin.readline

n, m = map(int, input().split())

pokedex = []
for _ in range(n):
    pokedex.append(input().strip())

name2idx = {name:idx for idx, name in enumerate(pokedex, start=1)}
idx2name = {idx:name for idx, name in enumerate(pokedex, start=1)}

for _ in range(m):
    sec = input().strip()
    if sec < 'A':
        print(idx2name[int(sec)])
    else:
        print(name2idx[sec])