#include <stdio.h>
int main(void)
{
    int n, m, sum, max=0;
    int a[100]={0};    //3<=n<=100
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            for(int k=0;k<n;k++)
            {
                sum=a[i]+a[j]+a[k];
                if(sum<=m && sum>max && i!=j && j!=k && k!=i)
                    max=sum;    //세장의 카드가 다르고 m에 가장 근접한 합
            }
    printf("%d\n", max);
    return 0;
}