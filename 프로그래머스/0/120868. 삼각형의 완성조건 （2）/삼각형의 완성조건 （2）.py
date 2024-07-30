def solution(sides):
    return len(range(max(sides) - min(sides) + 1, sum(sides)))