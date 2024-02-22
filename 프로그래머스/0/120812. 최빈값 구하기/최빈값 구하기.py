def solution(array):
    array_set = list(set(array))
    count = []
    for i in array_set:
        count.append(array.count(i))
    cs = sorted(count)
    if len(count) > 1 and cs[-1] == cs[-2]:
        return -1
    return array_set[count.index(cs[-1])]