n, b = input().split()
rst = 0
for i, ch in enumerate(n[::-1]):
    rst += (int(ch) if ord(ch) < ord('A') else ord(ch) - ord('A') + 10) * (int(b)**i)
print(rst)