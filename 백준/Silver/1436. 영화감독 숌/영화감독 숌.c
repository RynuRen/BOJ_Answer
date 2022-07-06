#include <stdio.h>
int main(void)
{
    int n, cnt=0, num=666;
    scanf("%d", &n);
    while(1)
    {
        int tmp=num;
        while(tmp!=0)    //숫자를 일의 자리부터 때어내가며 666이 있는지 확인하는 반복
        {
            if(tmp%1000==666){
                cnt++;
                break;
            }
            else
                tmp/=10;
        }
        if(cnt==n){
            printf("%d\n", num);
            break;
        }
        num++;
    }
    return 0;
}