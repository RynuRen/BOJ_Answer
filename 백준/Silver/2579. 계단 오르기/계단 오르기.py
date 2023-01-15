def max_sum(n):
    dp[1] = scores[1]
    dp[2] = dp[1] + scores[2]
    for i in range(3, n+1):
        # i층_최대점수 = max((i-1층_최대점수), (i-2층_최대점수)) + i층_점수
        # i-1층_최대점수는 i-2에서 올라오지 않아야 하므로 i-3에서 올라온 경우로 변환
        dp[i] = max(dp[i-3]+scores[i-1], dp[i-2]) + scores[i]
    return dp[n]

n = int(input())
scores =[0] + [int(input()) for _ in range(n)]
dp = [0] * (n+1)
if len(scores) < 3:
    print(sum(scores))
else:
    print(max_sum(n))