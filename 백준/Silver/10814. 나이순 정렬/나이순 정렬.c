#include <stdio.h>
#include <stdlib.h>    //calloc함수
typedef struct{
    int age;
    char name[101];
}Member;
Member tmp[100000];
//비교 대상이 같을 때 위치가 변하지 않는 안정된 정렬인 병합 정렬 이용
void merge_sort(Member*, int, int);
void merge(Member*, int, int, int);
int main(void)
{
    int n;
    Member* N=(Member*)calloc(100000, sizeof(Member));
    if(N==NULL){
        puts("Alloc Memory Error!!");
        exit(1);
    }
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%d %s", &N[i].age, &N[i].name);
    
    merge_sort(N, 0, n-1);    //시작과 끝의 인덱스를 넘김
    
    for(int i=0;i<n;i++)
        printf("%d %s\n", N[i].age, N[i].name);
    free(N);
    return 0;
}
void merge_sort(Member a[], int start, int end)
{
    int center;
    if(start<end){
        center=(start+end)/2;
        merge_sort(a, start, center);   //앞
        merge_sort(a, center+1, end);   //뒤
        merge(a, start, center, end);   //합치기
    }
}
void merge(Member a[], int start, int center, int end)
{
    int i=start;    //앞 인덱스
    int j=center+1; //뒤 인덱스
    int k=start;    //tmp 인덱스
    while(i<=center && j<=end)
    {
        if(a[i].age<=a[j].age)      //작은 순서대로, 같으면 앞의 것을 tmp에 넣음(안정 정렬)
            tmp[k++]=a[i++];
        else
            tmp[k++]=a[j++];
    }
    if(i>center){
        for(int l=j;l<=end;l++)     //남은 뒤부분 넣기
            tmp[k++]=a[l];
    }
    else{
        for(int l=i;l<=center;l++)  //남은 앞부분 넣기
            tmp[k++]=a[l];
    }
    for(int l=start;l<=end;l++)     //원본에 복사
        a[l]=tmp[l];
}