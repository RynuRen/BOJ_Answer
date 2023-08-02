# def solution(ingredient):
#     cnt = 0
#     string = ''.join(map(str, ingredient))
#     while '1231' in string:
#         string = string.replace('1231', '', 1)
#         cnt += 1
#     return cnt

def solution(ingredient):
    cnt = 0
    hbg = [1,2,3,1]
    stack = []
    for i in ingredient:
        stack.append(i)
        if stack[-4:] == hbg:
            cnt += 1
            for _ in range(4):
                stack.pop()
    return cnt