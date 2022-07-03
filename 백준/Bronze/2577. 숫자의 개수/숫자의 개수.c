#include <stdio.h>
int main(void)
{
    int a, b, c;
    int mult, i, j, cnt;
    int arr[10];
    scanf("%d %d %d", &a, &b, &c);
    mult=a*b*c;
    for(i=0;i<10;i++)
    {
        arr[i]=mult%10;
        if(mult==0)
            arr[i]=-1;        //남은 arr에 쓰레기값이 들어가는 것을 방지
        mult/=10;
    }
    for(j=0;j<10;j++)
    {
        cnt=0;
        for(i=0;i<10;i++)
        {            
            if(arr[i]==j)
                cnt++;            
        }
        printf("%d \n", cnt);
    }
    return 0;
}
