def solution(numbers):
    numbers.sort()
    mx = numbers[-1] * numbers[-2]
    mn = numbers[0] * numbers[1]
    return max(mx, mn)