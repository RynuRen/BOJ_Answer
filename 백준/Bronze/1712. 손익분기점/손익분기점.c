#include <stdio.h>
int main(void)
{
    int a, b, c, rst;
    scanf("%d %d %d", &a, &b, &c);
    if((c-b<=0))
        rst=-1;
    else
        rst=a/(c-b)+1;
    printf("%d \n", rst);
    return 0;
}