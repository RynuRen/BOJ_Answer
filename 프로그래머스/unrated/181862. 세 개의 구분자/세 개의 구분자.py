import re

def solution(myStr):
    answer = re.sub("[a-c]", " ", myStr).split()
    return answer if len(answer) else ["EMPTY"]