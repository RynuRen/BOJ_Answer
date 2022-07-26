#include <stdio.h>

int A[100001], tmp[100001];
void merge_sort(int, int);
void merge(int, int, int);
int binary_search(int, int);
int main(void)
{
    int n, m, M;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%d", &A[i]);
    merge_sort(0, n-1);
    scanf("%d", &m);
    for(int i=0;i<m;i++){
        scanf("%d", &M);
        printf("%d\n", binary_search(M, n-1));
    }
    return 0;
}
//배열 쪼개기
void merge_sort(int start, int end)
{
    int mid;
    if(start<end){
        mid=(start+end)/2;
        merge_sort(start, mid);
        merge_sort(mid+1, end);
        merge(start, mid, end);
    }
}
//병합
void merge(int start, int mid, int end)
{
    int i=start;
    int j=mid+1;
    int k=start;
    while(i<=mid && j<=end){
        if(A[i]<=A[j])
            tmp[k++]=A[i++];
        else
            tmp[k++]=A[j++];
    }
    if(i>mid)
        for(int l=j;l<=end;l++)
            tmp[k++]=A[l];
    else
        for(int l=i;l<=mid;l++)
            tmp[k++]=A[l];
    for(int l=start;l<=end;l++)
        A[l]=tmp[l];
}
//이분탐색
int binary_search(int tar, int end)
{
    int mid, start=0;
    while(start<=end){
        mid=(start+end)/2;
        if(A[mid]==tar)
            return 1;
        else if(A[mid]>tar)
            end=mid-1;
        else
            start=mid+1;
    }
    return 0;
}