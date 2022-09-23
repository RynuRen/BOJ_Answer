#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%lld", (long long)(a+b)*(a-b));
    return 0;
}