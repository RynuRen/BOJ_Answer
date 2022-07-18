#include <stdio.h>
#define MIN(a, b) ((a)<(b))?(a):(b)
//10의 인수인 5나 2로 나눴을 때의 몫이 그 수 팩토리얼의 0 갯수
int count(int, int);
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", MIN(count(n, 5), count(n, 2)));
    return 0;
}
int count(int a, int b)
{
    int cnt=0;
    for(long long i=b;i<=a;i*=b)
        cnt+=a/i;
    return cnt;
}
