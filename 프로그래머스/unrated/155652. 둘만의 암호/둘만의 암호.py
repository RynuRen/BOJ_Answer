from string import ascii_lowercase

def solution(s, skip, index):
    answer = ''
    alpha = sorted(set(ascii_lowercase) - set(skip))
    alpha_dic = {k:v for v, k in enumerate(alpha)}
    for a in s:
        answer += alpha[(alpha_dic[a] + index) % len(alpha)]
    return answer