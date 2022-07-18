#include <stdio.h>
#define MIN(a, b) ((a)<(b))?(a):(b)
//10의 인수인 5나 2로 나눴을 때의 몫이 그 수 팩토리얼의 0 갯수
int count(int, int);
int main_2004(void)
{
    int n, m;
    int cnt2, cnt5;
    scanf("%d %d", &n, &m);
    //nＣm=n!/(n-m)!/m!
    cnt5=count(n, 5)-count(n-m, 5)-count(m, 5);
    cnt2=count(n, 2)-count(n-m, 2)-count(m, 2);
    
    printf("%d\n", MIN(cnt5, cnt2));
    return 0;
}
int count(int a, int b)
{
    int cnt=0;
    for(long long i=b;i<=a;i*=b)
        cnt+=a/i;
    return cnt;
}
