n = int(input())
cnt, num = 0, 666
while True:
    tmp = num
    while tmp:
        if tmp % 1000 == 666:
            cnt += 1
            break
        else:
            tmp //= 10
    if cnt == n:
        print(num)
        break
    num += 1