import sys
input = sys.stdin.readline
n = int(input())
words = []
for _ in range(n):
    words.append(input().strip())
words = sorted(list(set(words)), key = lambda x:(len(x), x))
print(*words, sep='\n')