n = int(input())
att = []
for _ in range(n):
    std = list(input().split())
    biday = list(map(int, std[1:]))
    att.append([std[0]] + biday)

att.sort(key=lambda x: (x[3], x[2], x[1]))

print(att[-1][0], att[0][0], sep='\n')