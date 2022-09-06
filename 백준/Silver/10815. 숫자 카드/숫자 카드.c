#include <stdio.h>
#include <stdlib.h>    //qsort함수
long long card[500000]={0,};    //주어진 수의 범위가 -10^7~10^7로 int의 표현범위를 넘음
long long pick[500000]={0,};
int compare(const void*, const void*);
int ser_bin(long long*, int, int);
int main(void)
{
    int n, m;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%lld", &card[i]);
    qsort(card, n, sizeof(long long), compare);    //가진 카드를 오름차순 정렬
    
    scanf("%d", &m);
    for(int i=0;i<m;i++)
        scanf("%lld", &pick[i]);
    
    for(int i=0;i<m;i++)
        printf("%d ", ser_bin(card, pick[i], n-1));
    return 0;
}
int compare(const void* a, const void* b)
{
    return *(int*)a-*(int*)b;
}
//이진탐색
int ser_bin(long long card[], int tar, int end)
{
    int mid, start=0;
    while(start<=end){
        mid=(start+end)/2;
        if(card[mid]==tar)
            return 1;
        else if(card[mid]>tar)
            end=mid-1;
        else
            start=mid+1;
    }
    return 0;
}