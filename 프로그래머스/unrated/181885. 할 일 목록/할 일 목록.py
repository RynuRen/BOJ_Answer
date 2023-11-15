def solution(todo_list, finished):
    return [i for i, f in zip(todo_list, finished) if not f]