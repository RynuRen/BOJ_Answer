import re

def solution(my_string):
    return sorted(map(int, re.sub("[^0-9]", "", my_string)))