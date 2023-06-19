n = int(input())
nlist = list(map(int, input().split()))
ndic = {k:1 for k in nlist}
m = int(input())
mlist = list(map(int, input().split()))
for i in mlist:
    print(1 if ndic.get(i) else 0, end=' ')