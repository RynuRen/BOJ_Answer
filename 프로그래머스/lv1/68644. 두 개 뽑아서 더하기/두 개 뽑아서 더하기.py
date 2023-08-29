from itertools import combinations

def solution(numbers):
    answer = []
    for i, j in combinations(range(len(numbers)), 2):
        answer.append(numbers[i] + numbers[j])
    return sorted(set(answer))