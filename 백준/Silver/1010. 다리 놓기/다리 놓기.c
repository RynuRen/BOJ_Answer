#include <stdio.h>
int main(void)
{
    int t, n, m, bico;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        scanf("%d %d", &n, &m);
        //동쪽 m개 중에 n개를 순서 상관없이 뽑아 서쪽 n개와 차례대로 연결: mＣn
        //mＣn=m!/(m-n)!/n! //오버플로우 주의
        bico=1;
        for(int j=0;j<n;j++){
            bico*=m-j;
            bico/=j+1;
        }
        printf("%d\n", bico);
    }
    return 0;
}