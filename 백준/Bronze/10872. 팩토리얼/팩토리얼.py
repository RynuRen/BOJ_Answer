def factorial(rst, n):
    if n == 1 or n == 0:
        return rst
    else:
        return factorial(rst*n, n-1)

n = int(input())
print(factorial(1, n))