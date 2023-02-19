cd = {'c':26, 'd':10}
car = input()

rst = cd[car[0]]
for i in range(1, len(car)):
    if car[i] == car[i-1]:
        rst *= cd[car[i]]-1
    else:
        rst *= cd[car[i]]

print(rst)