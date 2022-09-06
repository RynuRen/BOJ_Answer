#include <stdio.h>
#include <stdlib.h>    //malloc, calloc 함수
int bino_coef(int**, int, int);
int main(void)
{
    int n, k;
    int** tmp=(int**)malloc(sizeof(int*)*1001);
    for(int i=0;i<1001;i++)
        tmp[i]=(int*)calloc(1001, sizeof(int));
    if(tmp==NULL){
        puts("Alloc Memory Error!!");
        exit(1);
    }    
    scanf("%d %d", &n, &k);
    printf("%d\n", bino_coef(tmp, n, k));
    for(int i=0;i<1001;i++)
        free(tmp[i]);
    free(tmp);
    return 0;
}
//이항계수(binomial coefficient): n개의 집합에서 k개를 순서x 선택하는 수
//nＣk=nＣ(n-k), nＣ0=nＣn=1 이므로 k==0|k==n 일 때 이항계수는 1
//nＣk=(n-1)Ｃk+(n-1)Ｃ(k-1) 임을 이용
//동적 계획법(Dynamic Programming): 연산을 기록해둠
int bino_coef(int** tmp, int n, int k)
{
    if(k==0||k==n)
        return 1;
    if(tmp[n][k]==0)    //오버플로우 방지를 위해 10007로 나눈 나머지 저장
        tmp[n][k]=(bino_coef(tmp, n-1, k)+bino_coef(tmp, n-1, k-1))%10007;
    return tmp[n][k];
}