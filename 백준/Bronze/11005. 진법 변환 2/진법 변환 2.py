n, b = map(int, input().split())
rst = ''
while n:
    mod = n % b
    rst += str(mod) if mod < 10 else chr(ord('A') + mod - 10)
    n //= b
print(rst[::-1])
