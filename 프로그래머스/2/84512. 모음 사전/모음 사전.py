def calc(i):
    if i == -1:
        return 1
    if i == 0:
        return 5 + 1
    else:
        return 5 * calc(i-1) + 1

def solution(word):
    vowels = ["A", "E", "I", "O", "U"]
    answer = 0
    for i, c in enumerate(word):
        answer += vowels.index(c) * calc(3 - i) + 1
        print(answer)
    return answer