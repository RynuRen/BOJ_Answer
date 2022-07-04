#include <stdio.h>
int factorial1(int);
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", factorial1(n));
    return 0;
}
int factorial1(int a)
{
    if(a==0)
        return 1;
    else
        return a*factorial1(a-1);
    
}