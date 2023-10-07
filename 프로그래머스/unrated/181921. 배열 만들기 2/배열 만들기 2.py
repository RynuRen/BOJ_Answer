def solution(l, r):
    answer = []
    cond = [set(["0", "5"]), set("0"), set("5")]
    for i in range(l, r + 1):
        if set(str(i)) in cond:
            answer.append(i)
    return answer if answer else [-1]