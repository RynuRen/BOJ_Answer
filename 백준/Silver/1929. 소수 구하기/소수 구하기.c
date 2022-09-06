#include <stdio.h>
#include <stdlib.h>
void Eratos(int*);
int main(void)
{
    int m, n, i;
    int* Pnum=(int*)calloc(1000001, sizeof(int));    //1,000,000개의 배열은 크므로 힙영역에
    if(Pnum==NULL){
        printf("Alloc Memory Error");
        return -1;
    }
    
    Eratos(Pnum);
    
    scanf("%d %d", &m, &n);
    
    for(i=m;i<=n;i++)
        if(Pnum[i]==0)
            printf("%d\n", i);
    
    free(Pnum);
    return 0;
}
void Eratos(int* a)        //에라토스테네스의 체로 0부터 1000000까지의 소수에 0으로 표기
{
    int i, j;
    a[0]=1, a[1]=1;
    for(i=2;i<=1000000;i++)
        for(j=2;i*j<=1000000;j++)
            a[i*j]=1;
}