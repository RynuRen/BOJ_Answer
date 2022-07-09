#include <stdio.h>
typedef struct{
    int x;
    int y;
}Point;
Point temp[100000];
void merge_sort(Point*, int, int);
void merge(Point*, int, int, int);
int main(void)
{
    Point N[100000]={0,};
    int n, i;
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d %d", &N[i].x, &N[i].y);
    
    merge_sort(N, 0, n-1);
    
    for(i=0;i<n;i++)
        printf("%d %d\n", N[i].x, N[i].y);
    return 0;
}
void merge_sort(Point a[], int start, int end)
{
    int center;
    if(start<end){
        center=(start+end)/2;
        merge_sort(a, start, center);
        merge_sort(a, center+1, end);
        merge(a, start, center, end);
    }
}
void merge(Point a[], int start, int center, int end)
{
    int i=start;        //앞배열 인덱스
    int j=center+1;     //뒷배열 인덱스
    int k=start;        //temp 인덱스
    while(i<=center && j<=end)
    {
        if((a[i].x<a[j].x)||(a[i].x==a[j].x && a[i].y<a[j].y))
            temp[k++]=a[i++];       //x좌표가 같으면 y좌표를 비교
        else
            temp[k++]=a[j++];
    }
    if(i>center)
        for(int l=j;l<=end;l++)     //남은 뒷배열 복사
            temp[k++]=a[l];
    else
        for(int l=i;l<=center;l++)  //남은 앞배열 복사
            temp[k++]=a[l];
    for(int l=start;l<=end;l++)     //원본에 임시배열 복사
        a[l]=temp[l];
}