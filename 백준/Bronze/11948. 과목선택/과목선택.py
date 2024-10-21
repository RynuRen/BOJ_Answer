lst = []
for i in range(6):
    lst.append(int(input()))
print(sum(sorted(lst[:4])[-1:0:-1]) + max(lst[4:]))