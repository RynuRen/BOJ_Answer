def solution(my_string):
    trans = my_string.translate(str.maketrans("aeiou", "!!!!!"))
    return trans.replace("!", "", )