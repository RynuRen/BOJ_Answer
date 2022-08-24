#include <stdio.h>

int mod[1000001];    //mod[i]: i항까지의 누적합을 m으로 나눈 나머지
int cnt[1001]; //cnt[i]: 나머지가 i인 mod의 갯수

int main(void)
{
    int n, m, num;
    scanf("%d %d", &n, &m);
    for(int i=1;i<=n;i++){
        scanf("%d", &num);
        mod[i]=(mod[i-1]+num%m)%m;
        cnt[mod[i]]++;
    }
    //원하는(i,j)는 mod[j]-mod[i-1]==0, 즉 2가지 경우
    //1. i==1 일때 mod[j]==0 인 경우, 즉, cnt[0]의 값
    long long rst=cnt[0];
    //2. mod[j]==mod[i-1] 인 경우, cnt[x]에서 2가지를 선택하는 경우의 수(조합)
    //                  cnt[x]Ｃ2=(cnt[x]*(cnt[x]-1))/2
    for(int i=0;i<m;i++){
        //cnt에 들어오는 값의 범위는 10^6까지지만 *연산에 의해 int범위를 넘어섬
        rst+=(long long)cnt[i]*(cnt[i]-1)/2;
    }
    printf("%lld\n", rst);
    return 0;
}