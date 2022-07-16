#include <stdio.h>
int main(void)
{
    int a, n, N;
    int min=1000000, max=2;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &a);
        if(a<min)
            min=a;
        if(a>max)
            max=a;
    }
    printf("%d\n", min*max);
    return 0;
}