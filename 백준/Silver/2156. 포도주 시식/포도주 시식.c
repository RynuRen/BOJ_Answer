#include <stdio.h>
#define MAX(a, b) ((a)>(b)?(a):(b))

int wine[10000];
int dp[10000];

int drink(int);

int main(void)
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &wine[i]);
    }
    printf("%d\n", drink(n));
    return 0;
}
int drink(int n)
{
    dp[0]=wine[0];
    dp[1]=wine[1]+dp[0];
    //dp[i]: i잔째 최대 포도주 양
    //      ◎×○○                      || ~◎×○           || ~~◎×
    //dp[i]=wine[i]+wine[i-1]+dp[i-3] || wine[i]+dp[i-2] || dp[i-1]
    dp[2]=MAX(wine[2]+MAX(wine[1], dp[0]), dp[1]);
    for(int i=3;i<n;i++){
        dp[i]=MAX(wine[i]+MAX(wine[i-1]+dp[i-3], dp[i-2]), dp[i-1]);
    }
    return dp[n-1];
}