#include <stdio.h>
int factorial(int);
int main(void)
{
    //이항계수:N개의 원소집합에서 K개의 원소를 순서없이 선택하는 경우의 수
    //nＣk=N!/(N-K)!/K!
    int n, k;
    scanf("%d %d", &n,&k);
    printf("%d\n", factorial(n)/factorial(n-k)/factorial(k));
    return 0;
}
int factorial(int a)
{
    int rst=1;
    for(int i=2;i<=a;i++)
        rst*=i;
    return rst;
}
