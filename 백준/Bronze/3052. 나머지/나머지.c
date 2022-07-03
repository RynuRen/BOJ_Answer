#include <stdio.h>
int main(void)
{
    int arr[10];
    int i, j, cnt=0;
    for(i=0;i<10;i++)
    {
        scanf("%d", &arr[i]);
        arr[i]%=42;    
        for(j=0;j<i;j++)
            if(arr[i]==arr[j])
                break;
        if(i==j)        //j가 i와 같아질 때까지 위 반복문이 종료되지 않았다면
            cnt++;      //서로 같은 수가 없다는 것이므로 카운트를 한다
    }
    printf("%d \n", cnt);
    return 0;
}