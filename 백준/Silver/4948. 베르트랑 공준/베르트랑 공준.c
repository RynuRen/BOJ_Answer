#include <stdio.h>
#include <stdlib.h>
void Eratos(int*);
int main(void)
{
    int n, i, cnt;
    int* Pnum=(int*)calloc(246913, sizeof(int));    //1<=n<=123456에서 2n의 최대값은 246912이다
    if(Pnum==NULL){
        printf("Alloc Memory Error!!");
        return -1;
    }
    
    Eratos(Pnum);
    
    while(1)
    {
        scanf("%d", &n);
        if(n==0)
            break;
        cnt=0;
        for(i=n+1;i<=2*n;i++)    //n보다 크고 2n보다 작거나 같은 소수
            if(Pnum[i]==0)
                cnt++;
        printf("%d\n", cnt);
    }
    free(Pnum);
    return 0;
}
void Eratos(int* a)        //에라토스테네스의 체로 0부터 246912까지의 소수에 0으로 표기
{
    int i, j;
    a[0]=1, a[1]=1;
    for(i=2;i<=246912;i++)
        for(j=2;i*j<=246912;j++)
            a[i*j]=1;
}