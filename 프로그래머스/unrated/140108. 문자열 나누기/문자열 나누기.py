def solution(s):
    answer, same, diff = 0, 0, 0
    tar = False
    for idx, i in enumerate(s):
        if not tar:
            tar = i
        if tar == i:
            same += 1
        else:
            diff += 1
        if same == diff:
            answer += 1
            same, diff = 0, 0
            tar = False
        elif idx == len(s)-1:
            answer += 1
    return answer