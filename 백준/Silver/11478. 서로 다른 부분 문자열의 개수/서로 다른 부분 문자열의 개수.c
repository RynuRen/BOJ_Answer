#include <stdio.h>
#include <stdlib.h>    //qsort 함수
#include <string.h>    //strlen, strcpy, strncpy, strcmp 함수
char part_ch[500500][1001];    //문자열 1000개의 중복 포함 부분 문자열 최댓값 : 500500
void substr(char*, const char*, int, int);
int compare(const void*, const void*);
int zip_arr(char(*)[1001], int);
int main(void)
{
    char ch[1001];
    int zip_end, i=0;
    scanf("%s", ch);
    
    for(int j=1;j<=strlen(ch);j++) //j: 부분문자열의 길이 //k: 부분문자열의 시작지점
        for(int k=0;k<=strlen(ch)-j;k++)    //(총 길이)-(부분 길이)=최대 시작지점
            substr(part_ch[i++], ch, k, j); //주어진 문자열의 부분문자열을 part_ch에 저장
                                   //여기서 최종 i는 part_ch에 기록된 부분문자열 갯수
    qsort(part_ch, i, sizeof(part_ch[0]), compare);
    zip_end=zip_arr(part_ch, i);          //중복된 부분문자열을 제거
    
    printf("%d\n", zip_end+1);
    return 0;
}
void substr(char* to, const char* input, int start, int length)
{
    strncpy(to, input+start, length);
    to[length]='\0';    //strncpy는 strcpy와 달리 자동으로 널문자를 붙이지 않음
}
int compare(const void* a, const void* b)
{
    return strcmp((char*)a, (char*)b);
}
int zip_arr(char part_ch[][1001], int n)
{
    int j=0;
    for(int i=1;i<n;i++){
        if(strcmp(part_ch[i], part_ch[i-1])!=0)
            j++;
        strcpy(part_ch[j], part_ch[i]);
    }
    return j; //최종 j: 중복 제거 후 마지막 요소의 idx
}