#include <stdio.h>
int main(void)
{
    int n, min=1000000, max=-1000000, i;
    int arr[1000000];
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i]<min)
            min=arr[i];    
        if(arr[i]>max)
            max=arr[i];
    }
    printf("%d %d", min, max);
    return 0;
}