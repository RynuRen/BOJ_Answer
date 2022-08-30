#include <stdio.h>

int main(void)
{
    int n, i, flag=0;
    //10^9 * 10^9 결과 int 범위를 넘지만 long long int 범위 내
    long long price=0;  //기름값
    //10^9 * (10^5-1) 결과 int 범위를 넘지만 long long int 범위 내
    long long dis[100001]={0,}; //거리 누적합 배열
    int oil[100001];
    scanf("%d", &n);
    for(i=1;i<n;i++){
        int tmp;
        scanf("%d", &tmp);
        dis[i]=dis[i-1]+tmp;
    }
    for(i=0;i<n;i++){
        scanf("%d", &oil[i]);
    }
    i=0;
    while(i<n){
        for(int j=i+1;j<n;j++){
            //지금 도시 이후에 더 싼 주유소가 있다면
            //가장 가까운 그 도시까지 갈 기름만 넣음
            if(oil[i]>oil[j]){
                price+=oil[i]*(dis[j]-dis[i]);
                flag=1;
                i=j;
                break;
            }
        }
        //목적지까지 더 싼 주유소가 없다면
        //지금 도시에서 목적지까지 갈 기름을 모두 넣음
        if(!flag){
            price+=oil[i]*(dis[n-1]-dis[i]);
            break;
        }
        flag=0;
    }
    printf("%lld\n", price);
    return 0;
}
