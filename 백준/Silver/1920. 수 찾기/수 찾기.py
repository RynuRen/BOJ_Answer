n = int(input())
A = set(map(int, input().split()))
m = int(input())
M = list(map(int, input().split()))

for num in M:
    print(1 if num in A else 0)