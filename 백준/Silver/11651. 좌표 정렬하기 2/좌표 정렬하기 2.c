#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int x;
    int y;
}Point;                                 //직접만든 퀵 정렬 사용 시 피봇 선택에 따라 리스트가 불균형하게 나눠지는 경우가 발생할 수 있고
//int partition(Point*, int, int);      //  이경우 시간복잡도는 O(n^2)가 될 가능성이 있기에 시간초과가 뜬다
//void quick_sort(Point*, int, int);    //stdlib.h에서 제공하는 qsort함수는 median-of-three decision tree 방식으로 피봇을 선택한다
int compare(const void*, const void*);
int main_11651(void)
{
    Point N[100000]={0,};
    int n, i;
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d %d", &N[i].x, &N[i].y);
    
    qsort(N, n, sizeof(Point), compare);
    
    for(i=0;i<n;i++)
        printf("%d %d\n", N[i].x, N[i].y);
    return 0;
}
int compare(const void* a, const void* b)
{
    if((((Point*)a)->y>((Point*)b)->y)||(((Point*)a)->y==((Point*)b)->y&&((Point*)a)->x>((Point*)b)->x))
        return 1;
    else if(((Point*)a)->y<((Point*)b)->y)
        return -1;
    else
        return 0;
}
/*
int partition(Point a[], int start, int end)
{
    Point tmp;
    int low=start;        //피벗보다 작은 배열의 인덱스
    int high=end+1;           //피벗보다 큰 배열의 인덱스
    Point pivot=a[start];   //가장 왼쪽 데이터를 피벗으로 임의 선택
    
    do{
        do{            
            low++;    //start+1부터 +1씩 high와 교차하기 전, 피벗보다 큰 수가 나올 때까지 탐색
        }while(low<=end && ((a[low].y<pivot.y)||(a[low].y==pivot.y && a[low].x<pivot.x)));
                      //y좌표가 같다면 x좌표 비교
        do{
            high--;   //end부터 -1씩 low와 교차하기 전, 피벗보다 작은 수가 나올 때까지 탐색
        }while(high>=start && ((a[high].y>pivot.y)||(a[high].y==pivot.y && a[high].x>pivot.x)));
        
        if(low<high){       //low와 high가 교차하지 않았으면
            tmp=a[low];     //  low와 high의 값을 교체
            a[low]=a[high];
            a[high]=tmp;
        }
    }while(low<high);
    
    tmp=a[start];       //low와 high가 교차했다면 반복문을 빠져나와
    a[start]=a[high];   //  pivot과 high의 값을 교체
    a[high]=tmp;
    
    return high;        //pivot의 인덱스인 high를 반환
}
void quick_sort(Point a[], int start, int end)
{
    if(start<end){
        //피봇을 기준으로 두 부분으로 비균등 분할
        int pivot_i=partition(a, start, end);    //pivot_i는 피봇의 인덱스
        
        quick_sort(a, start, pivot_i-1);   //피봇 앞배열 정렬
        quick_sort(a, pivot_i+1, end);     //피봇 뒷배열 정렬
    }
}
*/
