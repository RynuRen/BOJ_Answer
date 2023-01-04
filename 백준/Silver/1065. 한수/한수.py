n = int(input())
cnt = 0
for num in range(1, n+1):
    if num < 100:
        cnt += 1
    elif num//100 - (num//10)%10 == (num//10)%10 - num%10:
        cnt += 1
print(cnt)