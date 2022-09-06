#include <stdio.h>
int Hansu(int);
int main(void)
{
    int n, i, cnt=0;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
        if(Hansu(i)==1)
            cnt++;
    printf("%d \n", cnt);
    return 0;
}
int Hansu(int i)//1<=i<=n<=1000
{
    int a[3];
    if(i<10)
        return 1;
    else if(i<100)
        return 1;
    else if(i<1000)
    {
        a[0]=i/100;
        a[1]=(i/10)%10;
        a[2]=i%10;
        if((a[0]-a[1])==(a[1]-a[2]))
            return 1;
        else
            return 0;
    }
    else
        return 0;
}