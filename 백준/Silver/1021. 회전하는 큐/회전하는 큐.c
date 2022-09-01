#include <stdio.h>

int main(void)
{
    int n, m, cnt=0;
    int idx[50];
    scanf("%d %d", &n, &m);
    for(int i=0;i<m;i++){
        scanf("%d", &idx[i]);
    }
    for(int i=0;i<m;i++){
        if(idx[i]<=(n+1)/2){
            //왼쪽으로 큐를 (idx[i]-1) 만큼 이동
            for(int j=i+1;j<m;j++){
                idx[j]=(n+idx[j]-(idx[i]-1)-1)%n; //pop하면 idx가 1 줄어듬
                if(idx[j]==0){
                    idx[j]=n;
                }
            }
            cnt+=idx[i]-1;
        }
        else{
            //오른쪽으로 큐를 (n-idx[i]) 만큼 이동
            for(int j=i+1;j<m;j++){
                idx[j]=(idx[j]+((n+1)-idx[i])-1)%n;
                if(idx[j]==0){
                    idx[j]=n;
                }
            }
            cnt+=(n+1)-idx[i];
        }
        n-=1; //큐 크기 감소
    }
    printf("%d\n", cnt);
    return 0;
}