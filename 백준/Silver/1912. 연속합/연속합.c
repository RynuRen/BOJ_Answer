#include <stdio.h>
#include <stdlib.h>     //malloc, exit, free 함수

int max_sum(int*, int*, int);

int main(void)
{
    int n, max;
    scanf("%d", &n);
    int* arr=(int*)malloc(n*sizeof(int));
    int* memo=(int*)malloc(n*sizeof(int));
    if(arr==NULL || memo==NULL){
        puts("Alloc Memory Error!!");
        exit(1);
    }
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    max=max_sum(arr, memo, n);
    printf("%d\n", max);
    free(arr);
    free(memo);
    return 0;
}
int max_sum(int* arr, int* memo, int n)
{
    int max=arr[0];
    memo[0]=arr[0];
    for(int i=1;i<n;i++){
        //이전까지 합에 현재 항을 더한 값과 현재 항을 비교하여 큰 값을 합 배열에
        if((memo[i-1]+arr[i])>arr[i]){
            memo[i]=memo[i-1]+arr[i];
        }
        else{
            memo[i]=arr[i];
        }
        //최댓값 갱신
        if(memo[i]>max){
            max=memo[i];
        }   
    }
    return max;
}