#include <stdio.h>
int main(void)
{
    int x, y, w, h, min=1000;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    if(min>x)
        min=x;
    if(min>w-x)
        min=w-x;
    if(min>y)
        min=y;
    if(min>h-y)
        min=h-y;
    printf("%d \n", min);
    return 0;
}