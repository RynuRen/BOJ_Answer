def calc(i):
    if i == -1:
        return 1
    if i == 0:
        return 5 + 1
    else:
        return 5 * calc(i-1) + 1

def solution(word):
    answer = 0
    for i, c in enumerate(word):
        answer += "AEIOU".index(c) * calc(3 - i) + 1
    return answer