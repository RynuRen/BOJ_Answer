#include <stdio.h>

int arr[100001]; //arr[i]: i번째 수까지 누적 합 기록 배열

int main(void)
{
    int n, m, num, i, j;
    scanf("%d %d", &n, &m);
    for(int k=1;k<=n;k++){
        scanf("%d", &num);
        arr[k]=arr[k-1]+num;
    }
    for(int k=0;k<m;k++){
        scanf("%d %d", &i, &j);
        printf("%d\n", arr[j]-arr[i-1]);
    }
    return 0;
}