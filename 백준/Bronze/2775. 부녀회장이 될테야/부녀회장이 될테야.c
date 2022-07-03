#include <stdio.h>
int main(void)
{
    int t, k, n, i, j, l;
    int a[14];

    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        for(j=0;j<14;j++)    //tast case 마다 0층 인원 초기화
            a[j]=j+1;
        scanf("%d %d", &k, &n); //k층 n호
        for(j=0;j<k;j++)        //k층 까지 반복
            for(l=1;l<n;l++)    //각 층의 주민 수로 배열 재정의
                a[l]+=a[l-1];
        printf("%d \n", a[n-1]);
    }
    return 0;
}