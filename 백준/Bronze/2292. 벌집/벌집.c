#include <stdio.h>
int main(void)
{
    int n, i, sum;
    scanf("%d", &n);
    sum=0, i=0;
    while(1)
    {
        sum+=i;
        if((n-1)<=6*sum){       //n-1이 6(1+2+3+...+i)보다 작거나 같을 때 i+1개의 방을 지남
            break;
        }
        else
            i++;
    }
    printf("%d", i+1);
    return 0;
}
