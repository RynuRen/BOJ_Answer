from collections import Counter

def solution(X, Y):
    x = Counter(X)
    y = Counter(Y)
    inter = sorted(set(X) & set(Y), reverse=True)

    if not inter:
        return "-1"
    elif inter[0] == "0":
        return "0"
    
    answer = ''
    for i in inter:
        answer += i * min(x[i], y[i])
    return answer