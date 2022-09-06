#include <stdio.h>
int main(void)
{
    int n, i;
    double sum=0.0, max=0.0;
    double tst[1000];
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%lf", &tst[i]);
        if(tst[i]>max)
            max=tst[i];
    }
    for(i=0;i<n;i++)
    {
        tst[i]=tst[i]/max*100;
        sum+=tst[i];
    }
    printf("%f \n", sum/n);
    return 0;
}