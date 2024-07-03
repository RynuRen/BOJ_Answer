while True:
    a, b = map(int, input().split())
    if a == 0 and b == 0:
        break
    rst = "Yes" if a > b else "No"
    print(rst)