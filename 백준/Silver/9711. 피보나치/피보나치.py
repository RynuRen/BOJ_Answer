import sys
input = sys.stdin.readline

fibo = [0, 1]
for i in range(2, 10001):
    fibo.append(fibo[i-1] + fibo[i-2])

T = int(input())
for t in range(T):
    p, q = map(int, input().split())
    print(f"Case #{t+1}: {fibo[p]%q}")