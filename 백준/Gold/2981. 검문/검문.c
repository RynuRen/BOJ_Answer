#include <stdio.h>
#include <math.h>
void merge_sort(int*, int, int);
void merge(int*, int, int, int);
int get_gcd(int, int);
int main(void)
{
    int n, i, gcd;
    int N1[100]={0,};
    int N2[99]={0,};
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &N1[i]);
    merge_sort(N1, 0, n-1);    //숫자들의 차를 줄여 시간을 단축하기 위해 오름차순 정렬
    //N[i]=M*x+r, N[i+1]=M*y+r일 때
    //N[i+1]-N[i]=M*(y-x)이므로 주어진 숫자들 차의 최대공약수를!    
    for(i=0;i<n-1;i++)
        N2[i]=N1[i+1]-N1[i];
    //첫 두 숫자의 gcd와 그 다음 숫자의 gcd를.. 반복
    gcd=get_gcd(N2[0], N2[1]);
    for(i=2;i<n-1;i++)
        gcd=get_gcd(gcd, N2[i]);
    //구한 최대공약수의 약수를 출력(시간복잡도 줄이기 위해 sqrt이용)
    for(i=2;i<=sqrt(gcd);i++)
        if(gcd%i==0)
            printf("%d ", i);
    for(i=sqrt(gcd);i>0;i--)
        if(gcd%i==0 && gcd/i!=i)    //중복 제거
            printf("%d ", gcd/i);
    return 0;
}
void merge_sort(int N[], int start, int end)
{
    int mid;
    if(start<end){
        mid=(start+end)/2;
        merge_sort(N, start, mid);
        merge_sort(N, mid+1, end);
        merge(N, start, mid, end);
    }
}
void merge(int N[], int start, int mid, int end)
{
    int i=start;
    int j=mid+1;
    int k=start;
    int tmp[100];
    while(i<=mid && j<=end){
        if(N[i]<=N[j])
            tmp[k++]=N[i++];
        else
            tmp[k++]=N[j++];
    }
    if(i>mid){
        for(int l=j;l<=end;l++)
            tmp[k++]=N[l];
    }
    else{
        for(int l=i;l<=mid;l++)
            tmp[k++]=N[l];
    }
    for(int l=start;l<=end;l++)
        N[l]=tmp[l];
}
int get_gcd(int a, int b)
{
    int i;
    while(b!=0){
        i=a%b;
        a=b;
        b=i;
    }
    return a;
}