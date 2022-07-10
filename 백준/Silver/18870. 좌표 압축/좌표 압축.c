#include <stdio.h>
#include <stdlib.h>    //qsort함수
int ori[1000000]={0,};
int tmp[1000000]={0,};
int compare(const void*, const void*);
int zip_arr(int*, int);
int ser_idx(int*, int, int);
int main(void)
{
    int n, zip_end;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &ori[i]);
        tmp[i]=ori[i];    //정렬과 중복값 제거를 위한 임시배열
    }
    
    qsort(tmp, n, sizeof(int), compare);
    zip_end=zip_arr(tmp, n);
    
    for(int i=0;i<n;i++)
        printf("%d ", ser_idx(tmp, ori[i], zip_end));
    return 0;
}
int compare(const void* a, const void* b)
{
    return *(int*)a-*(int*)b;
}
//중복 제거
int zip_arr(int tmp[], int n)
{
    int j=0;
    for(int i=1;i<n;i++){
        if(tmp[i]!=tmp[i-1])
            j++;
        tmp[j]=tmp[i];
    }
    return j;    //j는 중복 제거된 tmp 마지막 요소의 idx
}
//idx탐색에 시간복잡도를 줄이기 위한 이진탐색 사용
int ser_idx(int tmp[], int tar, int end)
{
    int mid, start=0;
    while(start<=end){
        mid=(start+end)/2;
        if(tmp[mid]==tar)
            return mid;
        if(tmp[mid]>tar)
            end=mid-1;
        else
            start=mid+1;
    }
    return 0;    //만족하지 않는 값이 없진 않겠지만 프로그램 안전성을 위해
}