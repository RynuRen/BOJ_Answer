#include <stdio.h>
#include <stdlib.h>    //qsort함수, calloc함수
int compare(const void*, const void*);
int main(void)
{
    int n;
    int* a=(int*)calloc(1000000,sizeof(int));
    if(a==NULL){
        puts("Alloc Memory Error!!");
        exit(1);
    }
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    
    qsort(a, n, sizeof(a[0]), compare);    //qsort(정렬할배열, 요소개수, 요소크기, 비교함수)
    
    for(int i=0;i<n;i++)
        printf("%d\n", a[i]);        
    return 0;
}
int compare(const void *a, const void *b)
{
    //return *(int*)a-*(int*)b;    //간단하게 음수 양수 0 반환
    if(*(int*)a>*(int*)b)
        return 1;        //a가 클 때 양수를 반환하면 오름차순, 음수를 반환하면 내림차순
    else if(*(int*)a<*(int*)b)
        return -1;
    else
        return 0;
}