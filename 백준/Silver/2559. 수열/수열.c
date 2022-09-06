#include <stdio.h>

int sum[100001];

int main(void)
{
    int n, k;
    int max=100000*(-100); //온도 합의 최솟값
    scanf("%d %d", &n, &k);
    for(int i=1;i<=n;i++){
        int num;
        scanf("%d", &num);
        sum[i]=sum[i-1]+num;
    }
    for(int i=k;i<=n;i++){
        if(max<sum[i]-sum[i-k]){
            max=sum[i]-sum[i-k];
        }
    }
    printf("%d\n", max);
    return 0;
}