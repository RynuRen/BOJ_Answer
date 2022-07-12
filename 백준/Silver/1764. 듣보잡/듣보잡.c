#include <stdio.h>
#include <stdlib.h>    //qsort함수
#include <string.h>    //strcpy, strcmp함수
char nohear[500000][21];
char nono[500000][21];
int compare(const void*, const void*);
void bin_ser(char*, int, int*);
int main(void)
{
    int n, m, cnt=0;
    char nosee[21]={0,};
    scanf("%d %d", &n, &m);
    for(int i=0; i<n;i++)
        scanf("%s", nohear[i]);
    qsort(nohear, n, 21, compare);
    
    for(int i=0;i<m;i++){
        scanf("%s", nosee);
        bin_ser(nosee, n-1, &cnt);
    }
    qsort(nono, cnt, 21, compare);    //출력 전에 사전순 정렬
    printf("%d\n", cnt);
    for(int i=0; i<cnt;i++)
        printf("%s\n", nono[i]);
    return 0;
}
int compare(const void* a, const void* b)
{
    return strcmp((char*)a, (char*)b);
}
void bin_ser(char* tar, int end, int* cnt)
{
    int mid, start=0;
    while(start<=end){
        mid=(start+end)/2;
        if(strcmp(nohear[mid], tar)==0){
            strcpy(nono[(*cnt)], tar);    //출력용 배열에 복사
            (*cnt)++;
            return;
        }
        else if(strcmp(nohear[mid], tar)>0)
            end=mid-1;
        else
            start=mid+1;
    }
    return;
}