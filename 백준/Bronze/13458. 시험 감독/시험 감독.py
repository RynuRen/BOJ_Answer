import math

n = int(input())
testers = list(map(int, input().split()))
b, c = map(int, input().split())
bisup = 0
for tester in testers:
    rem = tester - b
    if rem < 0:
        continue
    bisup += math.ceil(rem/c)
print(n + bisup)