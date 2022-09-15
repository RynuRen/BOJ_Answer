#include <stdio.h>

int main(void)
{
    int num[30]={0,};
    int tmp;
    for(int i=0;i<28;i++){
        scanf("%d", &tmp);
        num[tmp-1]=1;
    }
    for(int i=0;i<30;i++){
        if(num[i]==0){
            printf("%d\n", i+1);
        }
    }
    return 0;
}