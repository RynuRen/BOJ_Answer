from collections import deque

def solution(num_list):
    answer = deque(num_list)
    answer.reverse()
    return list(answer)