def hanoi(n, start, dest, via): # (갯수, 시작, 도착, 경우)
    if n == 1:
        print(start, dest)
    else:
        hanoi(n-1, start, via, dest)    # ①n-1개의 원판을 [시작]에서 [경유]로 [도착]을 거처 이동
        print(start, dest)              # ②가장큰 n원판을 [시작]에서 [도착]으로 이동 출력
        hanoi(n-1, via, dest, start)    # ③옮겨둔 n-1개의 원판을 [경우]에서 [도착]으로 [시작]을 거처 이동
                                        # ①,③ n-1이동 2번 + n번째 이동 1번 -> a_n = 2a_(n-1) + 1 = 2(a_(n-1) + 1) - 1
                                        # (a_n + 1) = 2(a_(n-1) + 1) -> 첫항이 2, 공비가 2인 등비수열
                                        # a_n + 1 = 2^n
                                        # a_n = 2^n - 1
n = int(input())
print(2**n - 1)
hanoi(n, 1, 3, 2)