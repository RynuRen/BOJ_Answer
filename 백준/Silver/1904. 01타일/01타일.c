#include <stdio.h>

int t[1000001];
int tile(int);
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", tile(n));
    return 0;
}
int tile(int n)
{
    t[1]=1, t[2]=2;
    for(int i=3;i<=n;i++)
        t[i]=(t[i-1]+t[i-2])%15746;
    return t[n];
}