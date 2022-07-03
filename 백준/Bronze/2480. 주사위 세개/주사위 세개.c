#include <stdio.h>
int main(void)
{
    int a, b, c;
    int money;
    scanf("%d %d %d", &a, &b, &c);
    if (a==b&&b==c)
        money = 10000+1000*a;
    else if (a==b||a==c)
        money = 1000+100*a;
    else if (b==c)
        money = 1000+100*b;
    else if (a>b&&a>c)
        money = 100*a;
    else if (b>a&&b>c)
        money = 100*b;
    else
        money = 100*c;
    printf("%d", money);
    return 0;
}