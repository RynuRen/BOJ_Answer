#include <stdio.h>
#define MIN(a, b) ((a)<(b)?(a):(b))

int dp[1000001];

int calculation(int);

int main(void)
{
    int x;
    scanf("%d", &x);
    printf("%d\n", calculation(x));
    return 0;
}
//f(x): x를 1로 만드는 최소 횟수
//f(x)=f(x-1)+1 또는 f(x/2)+1 또는 f(x/3)+1
int calculation(int x)
{
    dp[0]=dp[1]=0;
    for(int i=2;i<=x;i++){
        dp[i]=dp[i-1]+1;
        if(i%3==0){
            dp[i]=MIN(dp[i], dp[i/3]+1);
        }
        if(i%2==0){
            dp[i]=MIN(dp[i], dp[i/2]+1);
        }
    }
    return dp[x];
}