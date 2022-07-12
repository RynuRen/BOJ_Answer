#include <stdio.h>
#include <stdlib.h>    //qsort함수
int card[500000];
int compare(const void*, const void*);
int bin_ser_low(int, int);
int bin_ser_up(int, int);
int main(void)
{
    int n, m;
    int pick;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%d", &card[i]);
    qsort(card, n, sizeof(int), compare);
    
    scanf("%d", &m);
    for(int i=0;i<m;i++){
        scanf("%d", &pick);
        printf("%d ", bin_ser_up(pick, n)-bin_ser_low(pick, n));
    }
    return 0;
}
int compare(const void* a, const void* b)
{
    return *(int*)a-*(int*)b;
}
//target값이 정렬된 배열에 처음 등장하는(lower bound) idx 구하는 함수
int bin_ser_low(int tar, int end)
{
    int mid, start=0;
    while(start<end){
        mid=(start+end)/2;
        if(card[mid]>=tar)
            end=mid;
        else
            start=mid+1;
    }
    return start;
}
//target값이 정렬된 배열에 마지막으로 등장한 다음(upper bound) idx 구하는 함수
int bin_ser_up(int tar, int end)
{
    int mid, start=0;
    while(start<end){
        mid=(start+end)/2;
        if(card[mid]>tar)
            end=mid;
        else
            start=mid+1;
    }
    return start;
}
/*이분탐색이지만 선형탐색과 시간복잡도가 같아져서 의미가 없어진다
int ser_bin(int tar, int end)
{
    int mid, cnt=0, start=0;
    while(start<=end){
        mid=(start+end)/2;
        if(card[mid]==tar){
            cnt++;
            int midh=mid;
            while(card[midh+1]==tar){  //찾은 값의 오른쪽으로 중복값이 몇개인지 확인
                midh++;
                cnt++;
            }
            while(card[mid-1]==tar){   //찾은 값의 왼쪽으로 중복값이 몇개인지 확인
                mid--;
                cnt++;
            }
            return cnt;
        }
        else if(card[mid]>tar)
            end=mid-1;
        else
            start=mid+1;
    }
    return cnt;
}*/
