# def solution(numbers):
#     return list(map(lambda x: x * 2, numbers))

# map과 lambda를 같이 쓰면 list comprehension보다 느림
def solution(numbers):
    return [n * 2 for n in numbers]