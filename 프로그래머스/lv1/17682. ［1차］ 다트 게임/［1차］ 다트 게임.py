import re

def solution(dartResult):
    answer = []
    bonus = {"S":1, "D":2, "T":3}
    rs = re.findall(r'(\d+)([SDT])([*#]*)', dartResult)
    for r in rs:
        p = r[0]
        b = bonus[r[1]]
        o = -1 if '#' in r[2] else 1
        answer.append(int(p)**b*o)
        if '*' in r[2]:
            answer[-2:] = [i * 2 for i in answer[-2:]]
    return sum(answer)