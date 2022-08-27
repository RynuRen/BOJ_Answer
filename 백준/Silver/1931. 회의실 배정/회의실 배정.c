#include <stdio.h>
#include <stdlib.h>     //qsort 함수

typedef struct{
    int start, end;
}conf_time;
conf_time arr[100000];

int compare(const void*, const void*);

int main(void)
{
    int n, end_time=0, cnt=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d %d", &arr[i].start, &arr[i].end);
    }
    //회의 끝나는 시간을 기준으로 정렬
    qsort(arr, n, sizeof(conf_time), compare);
    //가장 빨리 끝나는 회의를 선택하고 그 회의의 끝나는 시간보다
    //나중에 시간에 시작하는 회의들 중 가장 빨리 끝나는 회의 선택
    //을 반복하여 회의 수를 카운트
    for(int i=0;i<n;i++){
        if(arr[i].start>=end_time){
            end_time=arr[i].end;
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}
int compare(const void* a, const void* b)
{
    const conf_time* n1,* n2;
    n1=(const conf_time*)a;
    n2=(const conf_time*)b;
    if(n1->end!=n2->end){
        return n1->end-n2->end;
    }
    else{   //끝나는 시간이 같다면 시작 기준으로
        return n1->start-n2->start;
    }
}