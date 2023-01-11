n = int(input())

lens = []
for i in range(6):
    lens.append(int(input().split()[1]))
lens.append(lens[0])

total, max_area = 0, 0
for i in range(6):
    total += lens[i] * lens[i+1]
    if max_area < lens[i] * lens[i+1]:
        max_area = lens[i] * lens[i+1]

print(n * (total - 2 * max_area))