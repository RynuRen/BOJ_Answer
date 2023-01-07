num = []

for i in range(5):
    num.append(int(input()))
num.sort()

print(sum(num)//5, num[2], sep='\n')