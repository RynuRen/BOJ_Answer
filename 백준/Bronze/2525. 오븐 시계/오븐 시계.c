#include <stdio.h>
int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    b+=c;
    if (b>=60){
        a+=b/60;
        b%=60;
        if(a>=24)
            a-=24;            
    }   
    printf("%d %d", a, b);
    return 0;
}