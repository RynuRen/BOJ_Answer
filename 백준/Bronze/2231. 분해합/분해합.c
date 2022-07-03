#include <stdio.h>
int DSum(int);
int main(void)
{
    int n, tmp, len, i, rst=0;      //생성자가 없는 경우 0을 출력하기 위해 rst를 0으로 초기화
    scanf("%d", &n);
    tmp=n;
    for(len=0;tmp>0;len++)      //입력된 수의 자릿수 len 구하기
        tmp/=10;
    
    for(i=n-9*len;i<n;i++)      //자연수n의 생성자 최소치는 n에서 각 자리 수가 9일 경우를 뺀 수치
    {
        if(DSum(i)==n){         //최소치부터 확인해서 분해합이 n과 동일할 경우
            rst=i;
            break;
        }
    }
    printf("%d \n", rst);
    return 0;
}
int DSum(int num)   //분해합 구하는 함수
{
    int sum=0;
    sum+=num;       //자기 자신을 더하기
    while(num>0)    //각 자리 수 더하기
    {
        sum+=num%10;
        num/=10;
    }
    return sum;
}
