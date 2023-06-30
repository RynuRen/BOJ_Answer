def solution(land):
    for i in range(1, len(land)):
        for j in range(4):
            land[i][j] += max(max(land[i-1][:j], default=0), max(land[i-1][j+1:], default=0))
    return max(land[-1])