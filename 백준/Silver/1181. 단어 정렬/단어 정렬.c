#include <stdio.h>
#include <stdlib.h>    //qsort함수
#include <string.h>    //strlen, strcmp함수
int compare(const void*, const void*);
int main(void)
{
    int n;
    char ch[20000][51]={0,};
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%s", &ch[i]);
    
    qsort(ch, n, 51, compare);
    
    for(int i=0;i<n;i++)
    {
        if(i>0&&(strcmp((char*)ch[i-1], (char*)ch[i])==0))
            continue;            //이전 문자열과 같다면 print없이 다음 반복단계로
        printf("%s\n", ch[i]);
    }
    return 0;
}
int compare(const void* a, const void* b)
{
    if(strlen(a)>strlen(b))          //우선 길이를 비교
        return 1;
    else if(strlen(a)==strlen(b))    //길이가 같다면 strcmp함수로 비교
        return (strcmp((char*)a, (char*)b));
    else
        return -1;
}