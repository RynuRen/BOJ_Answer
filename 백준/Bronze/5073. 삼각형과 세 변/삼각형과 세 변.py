while True:
    sides = list(map(int, input().split()))
    if 0 in sides:
        break
    if max(sides) >= sum(sides) - max(sides):
        print('Invalid')
    else:
        x = len(set(sides))
        if x == 1:
            print('Equilateral')
        elif x == 2:
            print('Isosceles')
        else:
            print('Scalene')