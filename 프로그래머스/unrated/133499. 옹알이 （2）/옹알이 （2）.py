def solution(babbling):
    pron_able = ["aya", "ye", "woo", "ma"]
    answer = 0
    for w in babbling:
        for i in pron_able:
            if i*2 not in w:
                w = w.replace(i, ' ')
        if w.strip() == '':
            answer += 1
    return answer