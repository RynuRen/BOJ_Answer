#include <stdio.h>
int main(void)
{
    int arr[9];
    int i, cnt;
    int max=0;
    for (i=0;i<9;i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]>max){
            max=arr[i];
            cnt=i+1;
        }
    }
    printf("%d\n%d\n", max, cnt);
    return 0;
}