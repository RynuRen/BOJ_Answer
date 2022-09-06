#include <stdio.h>
void starR(int, int);
int main(void)
{
    int n, a, b;
    scanf("%d", &n);
    for(a=0;a<n;a++)        //a와 b는 좌표
    {
        for(b=0;b<n;b++)
            starR(a, b);
        printf("\n");
    }
    return 0;
}
void starR(int a, int b)
{
    if(a%3==1&&b%3==1)        //(1,1)이 비워지게
        printf(" ");
    else if(a==0||b==0)
        printf("*");
    else
        starR(a/3,b/3);
}