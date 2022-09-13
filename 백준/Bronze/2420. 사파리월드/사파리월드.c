#include <stdio.h>

int main(void)
{
    int n, m;
    long long ans;
    scanf("%d %d", &n, &m);
    if(n>m){
        ans=(long long)n-m;
    }
    else{
        ans=(long long)m-n;
    }
    printf("%lld\n", ans);
    return 0;
}