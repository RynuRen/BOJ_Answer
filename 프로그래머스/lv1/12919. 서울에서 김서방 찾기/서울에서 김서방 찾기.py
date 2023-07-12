def solution(seoul):
    dic = {k:v for v, k in enumerate(seoul)}
    return f"김서방은 {dic['Kim']}에 있다"