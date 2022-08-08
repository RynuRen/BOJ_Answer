#include <stdio.h>

void merge_sort(int*, int, int);
void merge(int*, int, int, int);

int main(void)
{
    int N, k;
    int x[1000];
    scanf("%d %d", &N, &k);
    for(int i=0;i<N;i++){
        scanf("%d", &x[i]);
    }
    merge_sort(x, 0, N-1);
    printf("%d\n", x[k-1]);
    return 0;
}
void merge_sort(int* x, int start, int end)
{
    int mid;
    if(start<end){
        mid=(start+end)/2;
        merge_sort(x, start, mid);  //앞배열
        merge_sort(x, mid+1, end);  //뒷배열
        merge(x, start, mid, end);  //병합
    }
}
void merge(int* x, int start, int mid, int end)
{
    int i=start;    //앞배열 인덱스
    int j=mid+1;    //뒷배열 인덱스
    int k=start;    //tmp 인덱스
    int tmp[1000];
    while(i<=mid && j<=end){
        if(x[i]>=x[j]){ //내림차순 정렬
            tmp[k++]=x[i++];
        }
        else{
            tmp[k++]=x[j++];
        }
    }
    if(i>mid){      //남은 뒷배열 채우기
        for(int l=j;l<=end;l++){
            tmp[k++]=x[l];
        }
    }
    else{           //남은 앞배열 채우기
        for(int l=i;l<=mid;l++){
            tmp[k++]=x[l];
        }
    }
    for(int l=start;l<=end;l++){
        x[l]=tmp[l];
    }
}