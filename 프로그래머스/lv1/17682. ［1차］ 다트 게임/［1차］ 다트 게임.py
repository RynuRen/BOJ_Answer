import re

def solution(dartResult):
    answer = []
    bonus = {"S":1, "D":2, "T":3}
    rs = re.findall(r'\d+[SDT][*#]*', dartResult)
    for r in rs:
        p = re.search(r'\d+', r).group()
        b = bonus[re.search(r'[SDT]', r).group()]
        o = -1 if '#' in r else 1
        answer.append(int(p)**b*o)
        if '*' in r:
            answer = answer[:-2] + [i * 2 for i in answer[-2:]]
    return sum(answer)