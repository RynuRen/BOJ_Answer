#include <stdio.h>
#define MAX(a, b) ((a)>(b)?(a):(b))

int arr[501];   //A를 인덱스로 하고 B를 값으로 가지는 배열
int dp[501];    //arr의 가장 긴 증가하는 부분 수열(LIS)의 길이

int LIS(int);
//A를 인덱스로 B값들을 정렬했을 때, LIS가 남겨야 할 전깃줄
//(없애야 할 전깃줄) = (전체 전깃줄 갯수) - (LIS의 길이)
int main(void)
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        int j;
        scanf("%d", &j);
        scanf("%d", &arr[j]);
    }
    printf("%d\n", n-LIS(n));
    return 0;
}
int LIS(int n)
{
    int max=0;
    for(int i=1;i<=500;i++){
        //A에 전깃줄이 있을 때(B값이 있을 때)만 연산
        if(arr[i]!=0){
            for(int j=0;j<i;j++){
                //i항이 이전 j항들보다 크면 이전 dp[j] 중 최댓값에 +1
                if(arr[i]>arr[j]){
                    dp[i]=MAX(dp[i], dp[j]);
                }
            }
            dp[i]+=1;
            //dp[n-1]이 최댓값이 아닐 수도 있기에 따로 연산
            max=MAX(max, dp[i]);
        }
    }
    return max;
}