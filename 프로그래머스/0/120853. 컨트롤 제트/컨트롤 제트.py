def solution(s):
    s = s.split()
    return sum([int(s[i]) if s[i] != "Z" else -1 * int(s[i - 1]) for i in range(len(s))])