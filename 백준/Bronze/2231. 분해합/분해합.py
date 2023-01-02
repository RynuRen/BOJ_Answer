def dsum(n):
    dsum = n
    while n > 0:
        dsum += n % 10
        n //= 10
    return dsum

n = int(input())
length = len(str(n))
rst = 0
for i in range(n-9*length, n):
    if dsum(i) == n:
        rst = i
        break
print(rst)