#include <stdio.h>
int main(void)
{
    int n, num;
    int cArray[10001]={0,};    //배열들의 데이터를 카운트할 배열
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &num);
        cArray[num]++;        //입력받은 숫자들을 카운트해서 기록
    }
    for(int i=0;i<=10000;i++)
        for(int j=0;j<cArray[i];j++)    //중복 입력받은 숫자들을 기록
            printf("%d\n", i);
    return 0;
}