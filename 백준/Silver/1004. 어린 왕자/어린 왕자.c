#include <stdio.h>
#include <math.h>    //pow, sqrt 함수
int main(void)
{
    int t, n, cnt;
    int x1,y1,x2,y2,cx,cy,cr;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d %d", &x1,&y1,&x2,&y2);
        scanf("%d", &n);
        cnt=0;
        for(int j=0;j<n;j++){
            scanf("%d %d %d", &cx,&cy,&cr);
            //cx,cy,cr인 원에 두 좌표중 하나만 포함되어야 cnt
            double dis1=sqrt(pow(x1-cx,2)+pow(y1-cy,2));    //1과 c중심의 거리
            double dis2=sqrt(pow(x2-cx,2)+pow(y2-cy,2));    //2와 c중심의 거리            
            if((dis1<cr && dis2>cr)||(dis1>cr && dis2<cr))
                cnt++;
        }
        printf("%d\n", cnt);
    }
    return 0;
}