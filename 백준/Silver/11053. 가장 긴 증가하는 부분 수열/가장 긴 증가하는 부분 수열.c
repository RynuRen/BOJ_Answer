#include <stdio.h>
#define MAX(a, b) ((a)>(b)?(a):(b))

int arr[1000];
int dp[1000];

int LIS(int);

int main(void)
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("%d\n", LIS(n));
    return 0;
}
int LIS(int n)
{
    int max=0;
    dp[0]=1;
    //dp[i]: i항이 최대인 LIS(Longest Increasing Subsequence)의 길이
    for(int i=1;i<n;i++){
        dp[i]=1;    //비교를 위한 초기값
        for(int j=0;j<i;j++){
    //i항이 이전 j항들보다 크면 j항까지의 IS 끝에 i항을 붙여도 IS가 성립하므로 dp[j]+1
    //j를 0부터 i-1까지 탐색하여 최댓값을 dp[i]
            if(arr[i]>arr[j]){
                dp[i]=MAX(dp[i], dp[j]+1);
            }
        }
    }
    //n-1항을 포함하는 부분수열 길이 dp[n-1]가 최댓값이 아닐 수도 있기에
    for(int i=0;i<n;i++){
        if(dp[i]>max){
            max=dp[i];
        }
    }
    return max;
}