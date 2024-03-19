def solution(emergency):
    s = sorted(emergency, reverse=True)
    return [s.index(i) + 1 for i in emergency]