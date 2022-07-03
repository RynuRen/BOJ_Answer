#include <stdio.h>
int Hansu(int);
int main(void)
{
    int n, i, cnt=0;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
        if(Hansu(i)==1)      //한수인지 체크하는 함수 호출
            cnt++;
    printf("%d \n", cnt);
    return 0;
}
int Hansu(int i)    //1<=i<=n<=1000
{
    int a[3];
    if(i<10)             //1~9는 배열이 한개에 공차가 0인 등차수열
        return 1;
    else if(i<100)       //10~99는 배열이 두개에 공차 두 수의 차이인 등차수열
        return 1;
    else if(i<1000)
    {
        a[0]=i/100;         //첫째자리
        a[1]=(i/10)%10;     //둘째자리
        a[2]=i%10;          //셋째자리
        if((a[0]-a[1])==(a[1]-a[2]))     //공차
            return 1;
        else
            return 0;
    }
    else
        return 0;
}
