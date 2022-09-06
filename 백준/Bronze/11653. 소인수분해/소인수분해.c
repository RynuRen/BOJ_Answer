#include <stdio.h>
#include <math.h>    //제곱근 구하는 sqrt함수
int main(void)
{
    int n, i;
    double a;
    scanf("%d", &n);
    if(n==1)        //1입력 시 그냥 종료
        return 0;
    a=sqrt(n);    //n을 이루는 등식은 대칭이므로 n의 제곱근과 가까운 약수까지만 확인
    for(i=2;i<=a;i++)
        while(1)
        {
            if(n%i!=0||n==i)    //나눠서 나머지가 0이 안나오거나 나눴을 때 1이 나오면 반복종료
                break;
            n/=i;
            printf("%d\n", i);
        }
    printf("%d", n);        //남은 소수를 출력
    return 0;
}