#include <stdio.h>

int main(void)
{
    int n, oil, min=0;
    long long price=0;
    int dis[100000];
    scanf("%d", &n);
    for(int i=0;i<n-1;i++){
        scanf("%d", &dis[i]);
    }
    for(int i=0;i<n-1;i++){ //n-1번째(목적지)의 기름값은 필요없는 정보
        scanf("%d", &oil);
        if(i==0 || min>oil){
            min=oil;    //최저값 갱신
        }
        price+=min*dis[i];
    }
    printf("%d\n", price);
    return 0;
}