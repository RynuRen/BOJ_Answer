while True:
    num = input()
    if num == '0':
        break
    leng = len(num)
    for i in range(leng//2):
        if num[i] != num[leng-1-i]:
            print('no')
            break
    else:
        print('yes')