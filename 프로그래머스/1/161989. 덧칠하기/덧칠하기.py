# def solution(n, m, section):
#     wall = [0] * n
#     for i in section:
#         wall[i - 1] = 1
#     cnt = 0
#     for i in range(n):
#         if wall[i] == 1:
#             wall = (wall[:i] + [0] * m + wall[i + m:])[:n]
#             cnt += 1
#     return cnt
def solution(n, m, section):
    cnt = 0
    tmp = 0
    for i in section:
        if tmp > i:
            continue
        else:
            tmp = i + m
            cnt +=1
    return cnt