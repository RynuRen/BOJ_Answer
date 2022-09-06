#include <stdio.h>
int main(void)
{
    int n, i, j;
    int a[50][3]={0};    //2<=n<=50
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d", &a[i][0], &a[i][1]);
        a[i][2]=1;
    }
    
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i!=j && a[i][0]<a[j][0] && a[i][1]<a[j][1])    //둘다 작으면 i는 j보다 덩치가 작음
                a[i][2]++;
    
    for(i=0;i<n;i++)
        printf("%d ", a[i][2]);
    return 0;
}