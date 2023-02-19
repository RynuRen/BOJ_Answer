from collections import Counter

T = int(input())
for _ in range(T):
    n = int(input())
    closet = []
    for _ in range(n):
        closet.append(input().split()[1])
    counter = Counter(closet)

    day = 1
    for kind in counter:
        day *= counter[kind] + 1
    print(day - 1)
        