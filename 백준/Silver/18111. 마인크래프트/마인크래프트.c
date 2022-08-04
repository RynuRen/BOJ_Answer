#include <stdio.h>
#include <stdlib.h>     //malloc, free 함수

int main(void)
{
    int** ground;
    int n, m, b, time, inv;
    int min=256, max=0;
    int min_time=256*500*500*2;
    int height=256;
    scanf("%d %d %d", &n, &m, &b);
    ground=(int**)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        ground[i]=(int*)malloc(m*sizeof(int));
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d", &ground[i][j]);
            if(ground[i][j]<min){
                min=ground[i][j];
            }
            if(ground[i][j]>max){
                max=ground[i][j];
            }
        }
    }
    for(int k=max;k>=min;k--){
        inv=b;
        time=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ground[i][j]>k){
                    //블록을 제거 인벤에 넣기
                    time+=2*(ground[i][j]-k);
                    inv+=ground[i][j]-k;
                }
                else if(ground[i][j]<k){
                    //인벤에서 꺼내 블록을 놓기
                    time+=k-ground[i][j];
                    inv-=k-ground[i][j];
                }
            }
        }
        //인벤이 -가 되는 경우 제외
        if(inv>=0){
            if(time<min_time){
                min_time=time;
                height=k;
            }
        }
    }
    printf("%d %d\n", min_time, height);
    for(int i=0;i<n;i++){
        free(ground[i]);
    }
    free(ground);
    return 0;
}