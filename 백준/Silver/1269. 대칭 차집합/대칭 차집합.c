#include <stdio.h>
#include <stdlib.h>    //qsort 함수
int A[200000];
int compare(const void*, const void*);
void binary_search(int, int, int*);
int main(void)
{
    int n, m;
    int target, cnt=0;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf("%d", &A[i]);
    qsort(A, n, sizeof(int), compare);       //이진탐색을 위해 오름차순 정렬
    
    for(int i=0;i<m;i++){
        scanf("%d", &target);
        binary_search(target, n-1, &cnt);    //중복되는 값을 탐색하여 카운트
    }
    printf("%d\n", n+m-2*cnt);
    return 0;
}
int compare(const void* a, const void* b)
{
    return *(int*)a-*(int*)b;
}
void binary_search(int target, int end, int* cnt)
{
    int mid, start=0;
    while(start<=end){
        mid=(start+end)/2;
        if(A[mid]==target){
            (*cnt)++;
            return;
        }
        else if(A[mid]>target)
            end=mid-1;
        else
            start=mid+1;
    }
}