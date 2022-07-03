#include <stdio.h>
int main(void)
{
    int t, i, x, y;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        int h, w, n;
        scanf("%d %d %d", &h, &w, &n);
        if(n%h==0){
            y=h;
            x=n/h;
        }
        else{
            y=n%h;
            x=n/h+1;
        }
        if(x<10)
            printf("%d0%d\n", y, x);
        else
            printf("%d%d\n", y, x);
    }
    return 0;
}