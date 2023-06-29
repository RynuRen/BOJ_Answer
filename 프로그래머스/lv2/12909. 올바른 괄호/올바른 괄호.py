def solution(s):
    stack = []
    for i in s:
        if i == '(':
            stack.append(i)
        elif i == ')' and stack:
            stack.pop()
        else:
            return False
    return False if stack else True