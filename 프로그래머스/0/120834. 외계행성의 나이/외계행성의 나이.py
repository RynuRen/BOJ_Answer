def solution(age):
    alpa = "abcdefghij"
    return "".join([alpa[i] for i in map(int, str(age))])