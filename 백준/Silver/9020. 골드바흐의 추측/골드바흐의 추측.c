#include <stdio.h>
#include <stdlib.h>    //calloc함수
void Eratos(int*);
int main(void)
{
    int t, n, i, j;
    int* Pnum=(int*)calloc(10001, sizeof(int));
    if(Pnum==NULL){
        printf("Alloc Memory Error!!");
        return -1;
    }
    
    Eratos(Pnum);
    
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d", &n);
        for(j=n/2;j>0;j--)    //두 소수의 차가 가장 작기 위해 n의 절반부터 체크
            if(Pnum[j]==0&&Pnum[n-j]==0){
                printf("%d %d\n", j, n-j);
                break;
            }
    }
    free(Pnum);
    return 0;
}
void Eratos(int* a)        //에라토스테네스의 체로 0부터 10000까지의 소수에 0으로 표기
{
    int i, j;
    a[0]=1, a[1]=1;
    for(i=2;i<=10000;i++)
        for(j=2;i*j<=10000;j++)
            a[i*j]=1;
}