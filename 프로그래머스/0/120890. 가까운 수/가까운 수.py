# def solution(array, n):
#     array.sort()
#     s = [abs(i - n) for i in array]
#     return array[s.index(min(s))]

def solution(array, n):
    array.sort(key=lambda x: (abs(x - n), x))
    return array[0]