#include <stdio.h>
#include <math.h>    //pow, sqrt 함수
int main(void)
{
    int t, s, result;
    int x1,y1,r1;
    int x2,y2,r2;
    double d;
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d %d %d %d", &x1,&y1,&r1,&x2,&y2,&r2);
        d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));    //d는 조와 백의 거리
        s=r1<r2 ? r2-r1 : r1-r2;
        if(r1==r2 && d==0)
            result=-1;  //원이 일치
        else if(d<r1+r2 && d>s)
            result=2;    //원의 교점이 2개
        else if(d==r1+r2 || d==s)
            result=1;    //원의 교점이 1개
        else
            result=0;
        printf("%d\n", result);
    }
    return 0;
}