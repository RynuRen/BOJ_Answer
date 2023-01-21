n = int(input())
std = []

for _ in range(n):
    raw = input().split()
    scores = list(map(int, raw[1:]))
    std.append([raw[0]]+scores)

std.sort(key=lambda x: (-x[1], x[2], -x[3], x[0]))

print(*[i[0] for i in std], sep='\n')