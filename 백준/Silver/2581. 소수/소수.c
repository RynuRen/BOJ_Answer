#include <stdio.h>
void Eratos(int*);
int main(void)
{
    int m, n, i, sum=0, min=10000;
    int Pnum[10001]={0};    //0부터 10000까지 10001개의 수
    
    Eratos(Pnum);
    
    scanf("%d %d", &m, &n);
    
    for(i=m;i<=n;i++)        //m과 n사이의 수가 소수일 때
        if(Pnum[i]==0){
            sum+=i;         //sum에 더하고
            if(i<min)
                min=i;      //min과 비교하여 min 갱신
        }
    if(sum==0)              //소수가 하나도 없어서 sum이 0일때 -1 출력
        printf("-1");
    else
        printf("%d\n%d\n", sum, min);
    return 0;
}
void Eratos(int* a)        //에라토스테네스의 체로 0부터 10000까지의 소수를 0으로 표기
{
    int i, j;
    a[0]=1, a[1]=1;
    for(i=2;i<=10000;i++)
        for(j=2;i*j<=10000;j++)
            a[i*j]=1;
}