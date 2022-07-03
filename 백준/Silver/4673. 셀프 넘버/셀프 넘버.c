#include <stdio.h>
#include <stdlib.h>
void nselfnum(int*);
int main(void)
{
    int nselnum[10001]={0};    //배열을 모두 0으로 초기화
    nselfnum(nselnum);        //0부터 10000까지 셀프넘버가 아닌 숫자에 1표시하는 함수
    for(int i=0;i<=10000;i++)
        if(nselnum[i]!=1)
            printf("%d \n", i);
    return 0;
}
void nselfnum(int* n)
{
    for(int i=0;i<=10000;i++)
    {
        int sum=0;
        int num=i;
        sum+=num;        //자기 자신을 더함
        while(num>0)     //각 자리 수 더함
        {
            sum+=num%10;
            num/=10;
        }
        if(sum>10000)    //i가 10000보다 작아도 생성된 수가 10000보다 클 경우 넘기기
            continue;
        n[sum]=1;
    }
}