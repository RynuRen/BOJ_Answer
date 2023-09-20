def solution(ineq, eq, n, m):
    eq = eq if eq == '=' else ''
    return int(eval(str(n) + ineq + eq + str(m)))