#include <stdio.h>
//10의 인수인 5나 2로 나눴을 때의 몫이 그 수 팩토리얼의 0 갯수
int div_five(int, long long);
int div_two(int, long long);
int main(void)
{
    int n, m;
    int cnt2, cnt5;
    scanf("%d %d", &n, &m);
    //nＣm=n!/(n-m)!/m!
    cnt5=div_five(n, 5)-div_five(n-m, 5)-div_five(m, 5);
    cnt2=div_two(n, 2)-div_two(n-m, 2)-div_two(m, 2);
    
    if(cnt5>cnt2)
        printf("%d\n", cnt2);
    else
        printf("%d\n", cnt5);
    return 0;
}
int div_five(int a, long long b)
{
    if(a/b==0)
        return 0;
    else
        return a/b+div_five(a, b*5);
}
int div_two(int a, long long b)
{
    if(a/b==0)
        return 0;
    else
        return a/b+div_two(a, b*2);
}