#include <stdio.h>

int t[1000001];
int tile(int);
int main(void)
{
    int n;
    t[1]=1;
    t[2]=2;
    scanf("%d", &n);
    printf("%d\n", tile(n));
    return 0;
}
int tile(int n)
{
    if(t[n]==0)
        t[n]=(tile(n-1)+tile(n-2))%15746;
    return t[n];
}