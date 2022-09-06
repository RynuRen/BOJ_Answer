#include <stdio.h>
int main(void)
{
    int k, i, x, max=0, sum=0;
    int a[7];
    scanf("%d", &k);
    for(i=0;i<6;i++)
        scanf("%d %d", &x, &a[i]);    //x는 필요없는 값
    a[6]=a[0];
    for(i=0;i<6;i++){
        sum+=a[i]*a[i+1];
        if(a[i]*a[i+1]>max)
            max=a[i]*a[i+1];
    }
    printf("%d\n", k*(sum-2*max));
    return 0;
}