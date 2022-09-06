#include <stdio.h>
int main(void)
{
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++)
    {   
        int tst[1000];
        int n, j, avr, cnt=0, sum=0;
        scanf("%d", &n);
        for(j=0;j<n;j++)
        {
            scanf("%d", &tst[j]);
            sum+=tst[j];
        }
        avr=sum/n;
        for(j=0;j<n;j++)
            if(tst[j]>avr)
                cnt++;
        printf("%.3f%% \n", (double)cnt/n*100);
    }
    return 0;
}