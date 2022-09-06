#include <stdio.h>
#define MIN(a, b) (a<b?a:b)

int paint[1000][3];
int dp[1000][3];

int min_sum(int);

int main(void)
{
    int N;
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &paint[i][j]);
        }
    }
    printf("%d\n", min_sum(N));
    return 0;
}
int min_sum(int N)
{
    int min=1000*1000;
    //초기값 기록 j:0=빨 1=초 2=파
    for(int j=0;j<3;j++){
        dp[0][j]=paint[0][j];
    }
    //이전 합중에서 칠할 색을 제외하고 작은 합을 선택
    for(int i=1;i<N;i++){
        dp[i][0]=MIN(dp[i-1][1], dp[i-1][2])+paint[i][0];
        dp[i][1]=MIN(dp[i-1][0], dp[i-1][2])+paint[i][1];
        dp[i][2]=MIN(dp[i-1][0], dp[i-1][1])+paint[i][2];
    }
    //골라진 비용합 중에서 최솟값 반환
    for(int j=0;j<3;j++){
        if(dp[N-1][j]<min){
            min=dp[N-1][j];
        }
    }
    return min;
}