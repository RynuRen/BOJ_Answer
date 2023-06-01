while True:
    sides = list(map(int, input().split()))
    if sides[0] == 0:
        break
    if 2 * max(sides) >= sum(sides):
        print('Invalid')
    else:
        x = len(set(sides))
        if x == 1:
            print('Equilateral')
        elif x == 2:
            print('Isosceles')
        else:
            print('Scalene')