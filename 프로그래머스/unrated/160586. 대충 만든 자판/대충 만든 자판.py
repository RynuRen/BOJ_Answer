def solution(keymap, targets):
    key = {}
    for k in keymap:
        for i, c in enumerate(k):
            if key.get(c):
                key[c] = min(key[c], i + 1)
            else:
                key[c] = i + 1
    answer = []
    for t in targets:
        cnt = 0
        for c in t:
            if key.get(c):
                cnt += key[c]
            else:
                cnt = -1
                break
        answer.append(cnt)
    return answer