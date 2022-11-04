#include <stdio.h>

int main(void)
{
    int x, y, max=0;
    int arr[10][10];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            scanf("%d", &arr[i][j]);
            if(arr[i][j]>=max){
                max=arr[i][j];
                x=i+1; y=j+1;
            }
        }
    }
    printf("%d\n%d %d", max, x, y);
    return 0;
}