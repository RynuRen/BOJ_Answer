# from itertools import permutations

# def solution(spell, dic):
#     perm = ["".join(i) for i in permutations(spell, len(spell))]
#     for i in dic:
#         if i in perm:
#             return 1
#     return 2

def solution(spell, dic):
    for i in dic:
        if not set(spell) - set(i) and len(spell) == len(i):
            return 1
    return 2