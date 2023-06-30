def solution(n):
    binary = format(n, 'b')
    one = binary.count('1')
    tmp = n
    while True:
        tmp += 1
        if format(tmp, 'b').count('1') == one:
            return tmp
    return 0