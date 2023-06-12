import sys
input = sys.stdin.readline
n = int(input())
coors = list(map(int, input().split()))
sorted_coors = sorted(list(set(coors)))
dict_coors = {y:x for x, y in enumerate(sorted_coors)}
for i in coors:
    print(dict_coors[i], end=' ')