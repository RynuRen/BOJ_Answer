a, b, c, d, e, f = map(int, input().split())

x = (c*e - b*f)//(a*e - b*d)
print(x, (c - a*x)//b if b != 0 else (f - d*x)//e)