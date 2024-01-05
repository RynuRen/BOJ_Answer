def solution(my_string):
    me = my_string.split()
    answer = 0
    op = True
    for i in me:
        if i  == "+":
            op = True
        elif i == "-":
            op = False
        else:
            if op:
                answer += int(i)
            else:
                answer -= int(i)
    return answer