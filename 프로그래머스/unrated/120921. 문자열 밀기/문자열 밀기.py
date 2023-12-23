# def solution(A, B):
#     for i in range(len(A)):
#         if A[-i:] + A[:-i] == B:
#             return i
#     return -1
def solution(A, B):
    return (B * 2).find(A)