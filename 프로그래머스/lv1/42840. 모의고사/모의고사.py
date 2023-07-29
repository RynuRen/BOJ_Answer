def solution(answers):
    person = [[1, 2, 3, 4, 5],
              [2, 1, 2, 3, 2, 4, 2, 5],
              [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]]
    rst = [0]*3
    for idx1, ans in enumerate(answers):
        for idx2, p in enumerate(person):
            if ans == p[idx1%len(p)]:
                rst[idx2] += 1
    return [i+1 for i, d in enumerate(rst) if d == max(rst)]