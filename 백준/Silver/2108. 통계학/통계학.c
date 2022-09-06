#include <stdio.h>
#include <stdlib.h>    //calloc함수
int temp[500000];
int mode_counter(int*);
void merge_sort(int*, int, int);
void merge(int*, int, int, int);
int main(void)
{
    int n;
    double sum=0;        //산술평균을 소수점 반올림하기 위해 double형으로
    int count[8001]={0,};    //-4000~4000
    int* a=(int*)calloc(500000,sizeof(int));
    if(a==NULL){
        puts("Alloc Memory Error!!");
        exit(1);
    }
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
        sum+=a[i];              //입력값의 합
        count[a[i]+4000]+=1;    //-4000이 인덱스 0에 입력되게 하여 -4000~4000까지의 수 카운트
    }
    
    merge_sort(a, 0, n-1);
    
    if(sum>=0)
        printf("%d\n", (int)(sum/n+0.5));
    else
        printf("%d\n", (int)(sum/n-0.5));  //산술평균 출력(소수점 첫째자리 반올림)
    printf("%d\n", a[n/2]);                //중앙값 출력
    printf("%d\n", mode_counter(count));   //최빈값 출력
    printf("%d\n", a[n-1]-a[0]);           //범위 출력
    free(a);
    return 0;
}
/*최빈값 확인*/
int mode_counter(int count[])
{
    int mod=0, max=0, overlap=0;    
    for(int i=0;i<8001;i++)
        if(max<count[i]){
            max=count[i];        //0~4000까지는 음수 8000~4001까지는 양수
            mod=i;
        }
    /*최빈값이 여러 개인지 체크*/
    for(int i=0;i<8001;i++)
        if(max==count[i]){
            overlap++;
            if(overlap==2)
                mod=i;
        }
    mod-=4000;    //실제 입력값으로 복구
    return mod;
}
/*병합 정렬*/
void merge_sort(int* a, int start, int end)    //재귀함수로 배열을 잘게 쪼갠다
{
    int center;
    if(start<end){
        center=(start+end)/2;    //배열을 2개로 균등분할
        merge_sort(a, start, center);    //앞쪽 배열
        merge_sort(a, center+1, end);    //뒤쪽 배열
        merge(a, start, center, end);    //정렬된 배열을 병합
    }
}
void merge(int* a, int start, int center, int end)
{
    int i=start;        //앞쪽 배열 인덱스
    int j=center+1;     //뒷쪽 배열 인덱스
    int k=start;        //정렬된 배열을 임시 저장하는 temp의 인덱스
    /*분할한 배열을 temp 임시배열에 정렬하여 병합*/
    while(i<=center && j<=end)
    {
        if(a[i]<=a[j])
            temp[k++]=a[i++];
        else
            temp[k++]=a[j++];
    }
    if(i>center){
        for(int l=j;l<=end;l++)    //앞쪽 배열 인덱스가 중앙을 넘어서면
            temp[k++]=a[l];        //그때까지 남은 뒤쪽 배열을 끝까지 temp뒤에 일괄 복사
    }
    else{
        for(int l=i;l<=center;l++)    //남은 조건인 뒤쪽 배열 인덱스가 끝을 넘어서면
            temp[k++]=a[l];           //그때까지 남은 앞쪽 배열을 중앙까지 temp뒤에 일괄 복사
    }
    /*temp에 임시 보관한 배열을 원본에 복사*/
    for(int l=start;l<=end;l++)
        a[l]=temp[l];
}