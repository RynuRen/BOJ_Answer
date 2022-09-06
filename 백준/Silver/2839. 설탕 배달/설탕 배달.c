#include <stdio.h>
int main(void)
{
    int n, i, j, rst=-1;          //정확하게 만들 수 없다면 -1을 출력하기 위해 초기화
    scanf("%d", &n);
    for(i=0;i<=5000/5;i++)        //i는 5kg 봉지의 수
        for(j=0;j<=5000/3;j++)    //j는 3kg 봉지의 수
        {
            if(5*i+3*j==n){       //i부터 대입하기에 조건을 만족하면 가장 적은 봉지의 수가 된다
                rst=i+j;
                break;
            }
        }
    printf("%d", rst);
    return 0;
}