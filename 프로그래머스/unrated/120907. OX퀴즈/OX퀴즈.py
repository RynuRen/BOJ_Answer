# def solution(quiz):
#     answer = []
#     for q in quiz:
#         q = q.split("=")
#         if eval(q[0].strip()) == int(q[1].strip()):
#             answer.append("O")
#         else:
#             answer.append("X")
#     return answer
def solution(quiz):
    answer = []
    for q in quiz:
        q = q.split(" = ")
        f, op, s = q[0].split()
        if op == "+":
            rst = int(f) + int(s)
        else:
            rst = int(f) - int(s)
        if rst == int(q[1]):
            answer.append("O")
        else:
            answer.append("X")
    return answer