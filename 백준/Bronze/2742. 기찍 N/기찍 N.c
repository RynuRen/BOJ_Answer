#include <stdio.h>
int main(void)
{
    int n, i;
    scanf("%d", &n);
    for(i=0;i<n;i++)
        printf("%d \n", n-i);
    return 0;
}