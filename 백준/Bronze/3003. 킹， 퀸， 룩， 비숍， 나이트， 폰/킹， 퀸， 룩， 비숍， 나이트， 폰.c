#include <stdio.h>

int main(void)
{
    int b[6]={1,1,2,2,2,8};
    int w[6];
    for(int i=0;i<6;i++){
        scanf("%d", &w[i]);
    }
    for(int i=0;i<6;i++){
        printf("%d ", b[i]-w[i]);
    }
    return 0;
}