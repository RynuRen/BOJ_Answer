#include <stdio.h>
#include <stdlib.h>    //qsort함수
#include <string.h>    //strcmp함수
char s[10000][501];
int compare(const void*, const void*);
void ser_bin(char*, int, int*);
int main(void)
{
    int n, m, cnt=0;
    char word[501];
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++)
        scanf("%s", &s[i]);
    qsort(s, n, 501, compare);
    
    for(int i=0;i<m;i++){
        scanf("%s", &word);
        ser_bin(word, n-1, &cnt);
    }
    printf("%d\n", cnt);
    return 0;
}
int compare(const void* a, const void* b)
{
    return strcmp((char*)a, (char*)b);
}
void ser_bin(char* tar, int end, int* cnt)
{
    int mid, start=0;
    while(start<=end){
        mid=(start+end)/2;
        if(strcmp(s[mid], tar)==0){
            (*cnt)++;
            return;
        }
        else if(strcmp(s[mid], tar)>0)
            end=mid-1;
        else
            start=mid+1;
    }
}