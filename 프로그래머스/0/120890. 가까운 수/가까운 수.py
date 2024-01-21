def solution(array, n):
    array.sort()
    s = [abs(i - n) for i in array]
    return array[s.index(min(s))]