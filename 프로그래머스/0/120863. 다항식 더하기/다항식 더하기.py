def solution(polynomial):
    xn = []
    no = 0
    for n in polynomial.split(" + "):
        if n[-1] == "x":
            xn.append(n)
        else:
            no += int(n)
    xn = list(map(lambda x: int(x.replace("x", "")) if x != "x" else 1, xn))

    answer = []
    xn = sum(xn)
    if xn > 1:
        answer.append(str(xn) + "x")
    elif xn == 1:
        answer.append("x")
    if no >= 1:
        answer.append(str(no))
    return " + ".join(answer) if len(answer) > 1 else answer[0]