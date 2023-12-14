def solution(arr):
    row, column = len(arr), len(arr[0])
    if row > column:
        for i in range(row):
            arr[i].extend([0] * (row - column))
    elif row < column:
        arr.extend(([0] * column) for _ in range(column - row))
    return arr