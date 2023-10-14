from collections import Counter

def solution(a, b, c, d):
    answer = 0
    l = [a, b, c, d]
    c = Counter(l)
    if len(c) == 1:
        answer = 1111 * a
    elif len(c) == 4:
        answer = min(l)
    elif len(c) == 3:
        t = c.most_common()[0][0]
        q, r = set(l) - set([t])
        answer = q * r
    else:
        s = c.most_common()
        p, q = s[0][0], s[1][0]
        if s[0][1] == 3:
            answer = (10 * p + q) ** 2
        else:
            answer = (p + q) * abs(p - q)
    return answer