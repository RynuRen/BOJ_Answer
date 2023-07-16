def solution(s, n):
    answer = ''
    for c in s:
        if c == ' ':
            answer += ' '
            continue
        up = False
        if c.isupper():
            up = True
            c = c.lower()
        tmp = ord(c) + n
        if tmp > ord('z'):
            tmp = tmp - ord('z') + ord('a') - 1
        answer += chr(tmp) if not up else chr(tmp).upper()
    return answer