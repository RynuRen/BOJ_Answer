#include <stdio.h>
#include <stdlib.h>     //malloc, free 함수

int main(void)
{
    int* ground;
    int n, m, b, time, inv;
    int min=256, max=0;
    int min_time=256*500*500*2;
    int height=256;
    scanf("%d %d %d", &n, &m, &b);
    ground=(int*)malloc(n*m*sizeof(int));
    for(int i=0;i<n*m;i++){
        scanf("%d", &ground[i]);
        if(ground[i]<min){
            min=ground[i];
        }
        if(ground[i]>max){
            max=ground[i];
        }
    }
    for(int k=max;k>=min;k--){
        inv=b;  //환경 초기화
        time=0;
        for(int i=0;i<n*m;i++){
            if(ground[i]>k){
                //블록을 제거 인벤에 넣기
                time+=2*(ground[i]-k);
                inv+=ground[i]-k;
            }
            else if(ground[i]<k){
                //인벤에서 꺼내 블록을 놓기
                time+=k-ground[i];
                inv-=k-ground[i];
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
    free(ground);
    return 0;
}