def solution(myString, pat):
    rmy = myString[::-1]
    for i in range(len(myString) - len(pat) + 1):
        if rmy[i:i + len(pat)] == pat[::-1]:
            return rmy[i:][::-1]