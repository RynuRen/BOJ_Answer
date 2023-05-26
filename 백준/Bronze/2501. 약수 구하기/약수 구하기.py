n, k = map(int, input().split())
div = []
cnt = 0
for i in range(1, n+1):
    if n%i == 0:
        div.append(i)
        cnt += 1
    else:
        continue
    if cnt == k:
        break
try:
    print(div[k-1])
except:
    print('0')