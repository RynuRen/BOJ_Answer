import sys, math
input = sys.stdin.readline

s = input().strip()
total = set()
for i in range(len(s)):
    for j in range(1, len(s)+1):
        total.add(s[i:i+j])
print(len(total))