#include <stdio.h>
int main(void)
{
    int n1, n2=0, a, b, c, i=0;
    scanf("%d", &n1);
    n2=n1;
    while(1)
    {
        a=n2/10;
        b=n2%10;
        c=a+b;
        n2=b*10+c%10;
        i++;
        if(n1==n2)
            break;
    }
    printf("%d \n", i);
    return 0;
}