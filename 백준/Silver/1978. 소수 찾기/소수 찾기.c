#include <stdio.h>
void Eratos(int*);
int main(void)
{
    int n, i, cnt=0;
    int num[100]={0};
    int Pnum[1001]={0};     //0부터 1000까지 1001개
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &num[i]);
    
    Eratos(Pnum);
    
    for(i=0;i<n;i++)        //입력받은 수를 소수를 0으로 표기한 배열과 비교
        if(Pnum[num[i]]==0)
            cnt++;
    printf("%d \n", cnt);
    return 0;
}
void Eratos(int* a)        //에라토스테네스의 체로 0부터 1000까지의 소수를 0으로 표기
{
    int i, j;
    a[0]=1, a[1]=1;                  //0과 1은 2보다 작으므로 소수가 아니다
    for(i=2;i<=1000;i++)
        if(a[i]==0){                 //i가 소수인 경우
            for(j=2;i*j<=1000;j++)   //i의 배수들을 모두 1로 표기
                a[i*j]=1;
        }
}