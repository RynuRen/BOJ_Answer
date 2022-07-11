#include <stdio.h>
#include <stdlib.h>    //qsort, atoi함수
#include <string.h>    //strcpy, strcmp함수
typedef struct{
    char name[21];
    int no;
}Pokemon;
Pokemon tmp[100001];      //이름순으로 정렬할 임시구조체
char poke[100001][21];    //1부터 100000까지 입력받음
char quiz[100000][21];
int compare(const void*, const void*);
int ser_bin(char*, int, int);
int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i=1;i<=n;i++){
        scanf("%s", poke[i]);
        strcpy(tmp[i].name, poke[i]);
        tmp[i].no=i;
    }
    qsort(tmp, n+1, sizeof(Pokemon), compare);
    for(int i=0;i<m;i++)
        scanf("%s", quiz[i]);
    
    for(int i=0;i<m;i++){
        if(quiz[i][0]>'0'&&quiz[i][0]<='9')       //입력받은 값이 숫자 범위라면
            printf("%s\n", poke[atoi(quiz[i])]);  //문자열을 int형으로 바꾸어 idx로
        else
            printf("%d\n", ser_bin(quiz[i], 1, n));
    }
    return 0;
}
int compare(const void* a, const void* b)
{
    return strcmp(((Pokemon*)a)->name, ((Pokemon*)b)->name);
}
int ser_bin(char* quiz, int start, int end)
{
    int mid;
    while(start<=end){
        mid=(start+end)/2;
        if(strcmp(tmp[mid].name, quiz)==0)
            return tmp[mid].no;
        else if(strcmp(tmp[mid].name, quiz)>0)
            end=mid-1;
        else
            start=mid+1;
    }
    return 0;
}