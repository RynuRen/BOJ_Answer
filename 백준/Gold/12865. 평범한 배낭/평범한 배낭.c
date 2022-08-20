#include <stdio.h>
#define MAX(a, b) ((a)>(b)?(a):(b))

typedef struct{
    int weight;
    int value;
}item;

item obj[101];
int dp[101][100001];

int Max_value(int, int);

int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i=1;i<=n;i++){
        scanf("%d %d", &obj[i].weight, &obj[i].value);
    }
    printf("%d\n", Max_value(n, k));
    return 0;
}
int Max_value(int n, int k)
{
    //dp[i][j]: i항까지의 weight합이 j인 max value합
    //dp[i][j] = dp[i-1][j-arr[i].weight] + arr[i].value (i항을 담는 경우)
    //          또는 dp[i-1][j] (i항을 담지 않는 경우)
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(j-obj[i].weight>=0){
                dp[i][j]=MAX(dp[i-1][j], dp[i-1][j-obj[i].weight]+obj[i].value);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][k];
}