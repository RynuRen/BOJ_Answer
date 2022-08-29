#include <stdio.h>
#include <string.h>     //strlen 함수
#include <stdlib.h>     //atoi 함수

int main(void)
{
    char str[51];   //null 포함 51
    char num[6];    //5자리를 넘지 않는 숫자
    int j=0, rst=0, minus=0;
    scanf("%s", &str);
    for(int i=0;i<=strlen(str);i++){
        //문자 +,- : 이전에 저장된 숫자를 결과와 연산
        if(str[i]=='+' || str[i]=='-'){
            //이전 연산에 -가 나왔다면
            minus?(rst-=atoi(num)):(rst+=atoi(num));
            memset(num, 0, 6);   //num배열 초기화
            j=0;                 //num배열 인덱스 초기화
            if(str[i]=='-'){
                minus=1;
            }
        }
        else{
            num[j++]=str[i];
        }
    }
    //남은 숫자를 마저 연산
    minus?(rst-=atoi(num)):(rst+=atoi(num));
    printf("%d\n", rst);
    return 0;
}