#include <stdio.h>
int main(void)
{
    int n, v, cnt=0;
    int nums[100];
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &nums[i]);
    }
    scanf("%d", &v);
    for(int i=0;i<n;i++){
        if(nums[i]==v){
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}