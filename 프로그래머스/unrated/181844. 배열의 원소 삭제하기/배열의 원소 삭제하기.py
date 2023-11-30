def solution(arr, delete_list):
    return [i for i in arr if i in set(arr) - set(delete_list)]