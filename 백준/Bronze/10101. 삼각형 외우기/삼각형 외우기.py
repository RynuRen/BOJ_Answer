angle = []
for _ in range(3):
    angle.append(int(input()))
if sum(angle) == 180:
    x = len(set(angle))
    if x == 1:
        print('Equilateral')
    elif x == 2:
        print('Isosceles')
    else:
        print('Scalene')
else:
    print('Error')