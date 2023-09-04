from collections import Counter

a = ['a', 'e', 'i', 'o', 'u']
while True:
    s = input()
    if s == '#':
        break
    c = Counter(s.lower())
    print(sum([c[i] for i in a]))