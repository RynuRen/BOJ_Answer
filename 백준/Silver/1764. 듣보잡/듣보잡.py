import sys
input = sys.stdin.readline

n, m = map(int, input().split())
person = set()
for _ in range(n):
    person.add(input().strip())
result = []
cnt = 0
for _ in range(m):
    mp = input().strip()
    if mp in person:
        result.append(mp)
        cnt += 1
print(cnt)
print(*sorted(result), sep='\n')