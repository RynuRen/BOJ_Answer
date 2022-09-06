#include <stdio.h>
#define MAX(a, b) ((a)>(b)?(a):(b))

int arr[1000];
int lis[1000];
int lds[1000];

int LBS(int);

int main(void)
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("%d\n", LBS(n));
    return 0;
}
//LBS=(lis[i]+lds[i]-1)의 최댓값
int LBS(int n)
{
    //LIS(Longest Increase Subsequence) 구하기
    //lis[i]: i항으로 끝나는 가장 긴 증가하는 부분 수열의 길이
    lis[0]=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            //i항이 이전 j항들보다 크면 이전 lis[j] 중 최댓값에 +1
            if(arr[i]>arr[j]){
                lis[i]=MAX(lis[i], lis[j]);
            }
        }
        lis[i]++;
    }
    //LDS(Longest Decrease Subsequence) 구하기
    //lds[i]: i항으로 시작하는 가장 긴 감소하는 부분 수열의 길이
    lds[n-1]=1;
    for(int i=n-2;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            //i항이 이후 j항들보다 크면 이후 lis[j] 중 최댓값에 +1
            if(arr[i]>arr[j]){
                lds[i]=MAX(lds[i], lds[j]);
            }
        }
        lds[i]++;
    }
    //LBS(Longest Bitonic Subsequence) 계산
    int lbs=1;
    for(int i=0;i<n;i++){
        lbs=MAX(lbs, lis[i]+lds[i]-1);
    }
    return lbs;
}