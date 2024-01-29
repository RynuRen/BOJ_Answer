def solution(lines):
    tmp = []
    for i in lines:
        tmp.append(set(range(i[0], i[1])))
    a = tmp[0] & tmp[1]
    b = tmp[1] & tmp[2]
    c = tmp[2] & tmp[0]
    return len(a.union(b).union(c))