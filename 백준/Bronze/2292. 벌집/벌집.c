#include <stdio.h>
int main(void)
{
    int n, i, sum;
    scanf("%d", &n);
    sum=0, i=0;
    while(1)
    {
        sum+=i;
        if((n-1)<=6*sum){
            break;
        }
        else
            i++;
    }
    printf("%d", i+1);
    return 0;
}