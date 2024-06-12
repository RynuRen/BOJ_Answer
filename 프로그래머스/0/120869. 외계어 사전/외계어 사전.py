from itertools import permutations

def solution(spell, dic):
    perm = ["".join(i) for i in permutations(spell, len(spell))]
    for i in dic:
        if i in perm:
            return 1
    return 2