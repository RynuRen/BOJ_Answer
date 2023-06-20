import sys
input = sys.stdin.readline

n = int(input())
company = set()
for _ in range(n):
    p = input().split()
    if p[1] == 'enter':
        company.add(p[0])
    elif p[1] == 'leave':
        company.remove(p[0])
print(*sorted(list(company), reverse=True), sep='\n')