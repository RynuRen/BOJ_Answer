N = int(input())
P = int(input())

coupon = [500, 0.9, 2000, 0.75]
pay = []
idx = (N if N < 20 else 20)//5 - 1
for i in [x for x in [idx-1, idx] if x >= 0]:
    if i%2 == 0:
        pay.append(P - coupon[i])
    else:
        pay.append(int(P * coupon[i]))
if not pay:
    pay.append(P)
rst = min(pay)
print(rst if rst > 0 else 0)