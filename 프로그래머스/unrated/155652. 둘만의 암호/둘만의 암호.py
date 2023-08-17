from string import ascii_lowercase

def solution(s, skip, index):
    answer = ''
    alpha = set(ascii_lowercase) - set(skip)
    alpha_dic = {k:v for v, k in enumerate(sorted(list(alpha)))}
    alpha_rev = {k:v for v, k in alpha_dic.items()}
    for a in s:
        answer += alpha_rev[(alpha_dic[a] + index) % len(alpha)]
    return answer