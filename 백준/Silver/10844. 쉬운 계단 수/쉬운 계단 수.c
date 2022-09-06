#include <stdio.h>

//dp[i][j]: j로 끝나는 길이가 i인 계단수
//dp[1~100][0~9]
int dp[101][10];

int stair(int);

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", stair(n));
    return 0;
}
int stair(int n)
{
    int sum=0;
    //n이 1일 때 1~9로 끝나는 계단수는 1개
    for(int i=1;i<=9;i++){
        dp[1][i]=1;
    }
    //j로 끝나는 길이가 i인 계단수는 (i-1) 길이의 (j-1)와 (j+1)로 끝나는 계단수의 합
    //dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1]
    for(int i=2;i<=n;i++){
        //j가 0일 때는 j+1만
        dp[i][0]=dp[i-1][1];
        for(int j=1;j<=8;j++){
            dp[i][j]=(dp[i-1][j-1]+dp[i-1][j+1])%1000000000;
        }
        //j가 9일 때는 j-1만
        dp[i][9]=dp[i-1][8];
    }
    for(int i=0;i<=9;i++){
        sum=(sum+dp[n][i])%1000000000;
    }
    return sum;
}