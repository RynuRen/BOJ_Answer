# def get_divisor_num(n):
#     cnt = 0
#     for i in range(1, int(n**0.5) + 1):
#         if n % i == 0:
#             cnt += 1
#             if i ** 2 != n:
#                 cnt += 1
#     return cnt

# def solution(left, right):
#     answer = 0
#     for i in range(left, right + 1):
#         if get_divisor_num(i) % 2 == 0:
#             answer += i
#         else:
#             answer -= i
#     return answer

# 약수의 개수가 홀수인 경우는 제곱근이 약수일 경우
def solution(left, right):
    return sum(-n if float(n ** 0.5).is_integer() else n for n in range(left, right + 1))