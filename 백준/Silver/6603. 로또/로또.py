from itertools import combinations

while True:
    num = list(map(int, input().split()))
    if num[0] == 0:
        break
    S = num[1:]
    for i in combinations(S, 6):
        print(*i)
    print()