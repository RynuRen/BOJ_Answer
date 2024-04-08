def solution(num_list, n):
    outer = []
    inner = []
    for i in num_list:
        inner.append(i)
        if len(inner) == n:
            outer.append(inner)
            inner = []
    return outer