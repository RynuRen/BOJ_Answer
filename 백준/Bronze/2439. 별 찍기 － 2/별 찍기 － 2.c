#include <stdio.h>
int main(void)
{
    int n, i, j;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(n-j<=i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}