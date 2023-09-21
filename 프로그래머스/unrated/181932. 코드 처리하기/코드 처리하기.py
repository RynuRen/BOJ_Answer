def solution(code):
    answer = ''
    mode = False
    for idx, c in enumerate(code):
        if c == '1':
            mode = not mode
            continue
        if (idx + int(mode)) % 2 == 0:
            answer += c
            if c == '1':
                mode = not mode
    return answer if answer else 'EMPTY'