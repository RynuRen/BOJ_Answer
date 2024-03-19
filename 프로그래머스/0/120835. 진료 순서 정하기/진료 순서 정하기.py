# def solution(emergency):
#     s = sorted(emergency, reverse=True)
#     return [s.index(i) + 1 for i in emergency]

def solution(emergency):
    s = sorted(emergency, reverse=True)
    d = {v: i for i, v in enumerate(s)}
    return [d[i] + 1 for i in emergency]