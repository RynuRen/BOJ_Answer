maxi = 0
for i in range(9):
    tmp = list(map(int, input().split()))
    # 최댓값 갱신
    if maxi <= max(tmp):
        maxi = max(tmp)
        max_row = i + 1
        max_col = tmp.index(max(tmp)) + 1

print(maxi)
print("{} {}".format(max_row, max_col))