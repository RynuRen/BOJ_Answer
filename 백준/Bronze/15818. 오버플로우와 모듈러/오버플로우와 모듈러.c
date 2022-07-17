#include <stdio.h>
int main(void)
{
    int n, m;
    int a;
    long long rst=1;
    scanf("%d %d", &n, &m);
    //모듈러 연산 (A × B) % M = ((A % M) × (B % M)) % M
    for(int i=0;i<n;i++){
        scanf("%d", &a);
        rst=(rst*(a%m))%m;
    }
    printf("%lld\n", rst);
    return 0;
}