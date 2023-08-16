def solution(today, terms, privacies):
    y, m, d = map(int, today.split('.'))
    terms = dict(term.split(' ') for term in terms)
    answer = []
    for i, p in enumerate(privacies):
        ymd, t = p.split(' ')
        y_, m_, d_ = map(int, ymd.split('.'))
        d_ -= 1
        m_ += int(terms[t])
        if d_ <= 0:
            d_ += 28
            m_ -= 1
        y_ += m_ // 12 if m_ % 12 != 0 else m_ // 12 - 1
        m_ = m_ % 12 if m_ % 12 != 0 else 12
        if 10000*y + 100*m + d > 10000*y_ + 100*m_ + d_:
            answer.append(i+1)
    return answer