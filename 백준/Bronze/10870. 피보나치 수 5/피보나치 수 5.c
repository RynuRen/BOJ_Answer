#include <stdio.h>
int fibo(int);
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fibo(n));
    return 0;
}
int fibo(int a)
{
    if(a==0)
        return 0;
    else if(a==1)
        return 1;
    else
        return fibo(a-1)+fibo(a-2);
}