sides = list(map(int, input().split()))
if 2 * max(sides) >= sum(sides):
    print(2 * (sum(sides) - max(sides)) - 1)
else:
    print(sum(sides))