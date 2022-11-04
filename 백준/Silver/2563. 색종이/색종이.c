#include <stdio.h>

int main(void)
{
    int num, x, y, sum=0;
    int arr[100][100]={0,};
    scanf("%d", &num);
    for(int i=0;i<num;i++) {
        scanf("%d %d", &x, &y);
        for(int j=x;j<x+10;j++) {
            for(int k=y;k<y+10;k++) {
                if(arr[j][k]!=1) {
                    arr[j][k]=1;
                    sum++;
                }
            }
        }
    }
    printf("%d", sum);
    return 0;
}