#include <stdio.h>
#define MAX(a, b) (a>b?a:b)

int stair[301];
int dp[301];

int max_sum(int);

int main(void)
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        scanf("%d", &stair[i]);
    }
    printf("%d\n", max_sum(n));
    return 0;
}
int max_sum(int n)
{
    //초기값 기록
    dp[0]=0;
    dp[1]=stair[1];
    dp[2]=stair[1]+stair[2];
    for(int i=3;i<=n;i++){
        //1층아래, 2층아래 합 중 최댓값 선택
        //1층아래 합은 연속된 층이 아닌 값이 되게 3층아래 합+1층아래 값
        dp[i]=MAX((dp[i-3]+stair[i-1]), dp[i-2])+stair[i];
    }
    return dp[n];
}