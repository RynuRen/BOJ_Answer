#include <stdio.h>
int main(void)
{
    int x, i, sum, a, b;
    scanf("%d", &x);
    i=1, sum=0;
    while(1)
    {
        sum+=i;
        if(x<=sum)    //x가 (1+2+..+i)보다 작거나 같을 때 분자/분모 는 i/1또는 1/i
            break;
        else
            i++;
    }
    if(i%2==0){        //i가 짝수면 i/1
        a=i-(sum-x);
        b=1+(sum-x);
    }
    else{
        a=1+(sum-x);    //i가 홀수면 1/i
        b=i-(sum-x);
    }
    printf("%d/%d \n", a, b);
    return 0;
}