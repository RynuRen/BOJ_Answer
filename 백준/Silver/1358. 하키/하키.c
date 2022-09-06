#include <stdio.h>
#include <math.h>    //pow, sqrt 함수
int main(void)
{
    int cnt=0;
    int w,h,x,y,p,px,py;
    scanf("%d %d %d %d %d", &w, &h, &x, &y, &p);
    for(int i=0;i<p;i++){
        scanf("%d %d", &px, &py);    //선수위치(px,py)
        //원1:C(x,y+h/2):R=h/2, 원2:C(x+w,y+h/2):R=h/2, 사각형:(x,y)(x+w,y+h)
        double dis1=sqrt(pow(x-px,2) + pow((y+h/2)-py,2));     //원1 중심과의 거리
        double dis2=sqrt(pow((x+w)-px,2) + pow((y+h/2)-py,2)); //원2 중심과의 거리
        if(dis1<=h/2 || dis2<=h/2 || (px>=x && px<=x+w && py>=y && py<=y+h))
            cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}