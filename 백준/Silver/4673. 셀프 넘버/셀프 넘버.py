# n 을 생성자로 가지는 num 구하는 함수
def d(n):
    num = n + sum(map(int, str(n)))
    return num

# 생성자를 갖는(셀프 넘버가 아닌) 수를 중복 배제 자료형으로 정의
non_self_num = set()

for i in range(1, 10001):
    non_self_num.add(d(i))

for i in range(1, 10001):
    if i not in non_self_num:
        print(i)