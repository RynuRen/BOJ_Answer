#include <stdio.h>
#define MAX(a, b) (a>b?a:b)

int arr[500][500];
int dp[500][500];

int max_sum(int);

int main(void)
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("%d\n", max_sum(n));
    return 0;
}
int max_sum(int n)
{
    int max=0;
    //초기값 기록
    dp[0][0]=arr[0][0];
    for(int i=1;i<n;i++){
        for(int j=0;j<i+1;j++){
            //삼각형 좌측 변의 합
            if(j==0){
                dp[i][j]=dp[i-1][j]+arr[i][j];
            }
            //삼각형 우측 변의 합
            else if(j==i){
                dp[i][j]=dp[i-1][j-1]+arr[i][j];
            }
            //선택 가능한 위층까지의 합 중에서 큰것을 선택
            else{
                dp[i][j]=MAX(dp[i-1][j-1], dp[i-1][j])+arr[i][j];
            }
        }
    }
    //경로의 끝에서 최대합을 반환
    for(int j=0;j<n;j++){
        if(dp[n-1][j]>max){
            max=dp[n-1][j];
        }
    }
    return max;
}