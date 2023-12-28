def solution(quiz):
    answer = []
    for q in quiz:
        q = q.split("=")
        if eval(q[0].strip()) == int(q[1].strip()):
            answer.append("O")
        else:
            answer.append("X")
    return answer