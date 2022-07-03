#include <stdio.h>
int DSum(int);
int main(void)
{
    int n, tmp, len, i, rst=0;
    scanf("%d", &n);
    tmp=n;
    for(len=0;tmp>0;len++)
        tmp/=10;
    
    for(i=n-9*len;i<n;i++)
    {
        if(DSum(i)==n){
            rst=i;
            break;
        }
    }
    printf("%d \n", rst);
    return 0;
}
int DSum(int num)    //분해합 구하는 함수
{
    int sum=0;
    sum+=num;
    while(num>0)
    {
        sum+=num%10;
        num/=10;
    }
    return sum;
}