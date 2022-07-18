#include <stdio.h>
int main(void)
{
    int n, cnt=0;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        if(i%5==0)
            cnt++;
        if(i%25==0)
            cnt++;
        if(i%125==0)
            cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}