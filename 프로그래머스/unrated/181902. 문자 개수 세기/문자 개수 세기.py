from collections import Counter

def count_chr(st, en, dic):
    lst = []
    for i in range(ord(st), ord(en) + 1):
        if chr(i) in dic.keys():
            lst.append(dic[chr(i)])
        else:
            lst.append(0)
    return lst

def solution(my_string):
    dic = Counter(my_string)
    answer = []
    answer.extend(count_chr('A', 'Z', dic))
    answer.extend(count_chr('a', 'z', dic))
    return answer