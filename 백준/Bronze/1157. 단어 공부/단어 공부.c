#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i, j, cnt, max=0;
    char rst, a='a', b='A';
    int alp[26];
    char* str=(char*)calloc(1000000,sizeof(char));    //보통 스택영역의 메모리는 크기를 한정시키는 시스템이 많기에 배열의 크기가 클 경우
    if(str==NULL)                                     //전역변수로 지정하여 데이터영역에 남기거나 직접 힙영역에 할당해 줘야 한다.
        printf("Alloc Memoey Error!!");               //calloc 함수는 값을 0 으로 초기화 시킨다
    scanf("%s", str);
    for(i=0;i<26;i++,a++,b++)
    {
        cnt=0;
        for(j=0;str[j]!='\0';j++)
            if(str[j]==a||str[j]==b)
                cnt++;
        alp[i]=cnt;               //alp배열에 입력받은 단어에서 알파벳 a부터 소문자 또는 대문자가 들어간 수를 넣음
    }
    for(i=0;i<26;i++)
        if(alp[i]>max){
            max=alp[i];
            rst=i;               //가장 많이 나온 알파벳과 그 횟수를 변수 rst와 max에 대입
        }
    for(i=0;i<26;i++)
        if(alp[i]==max&&i!=rst)  //max 횟수가 다른 알파벳에도 중복되는지 체크
            rst='?'-65;
    printf("%c", rst+65);     //알파벳 A의 아스키 코드가 65이므로 a[0]이 A이기에 i 즉, rst에 65를 더해준다 (중복될 경우 ?가 출력되게 위 조건에서 ?에 65만큼 빼둔다)
    free(str);           //할당했던 메모리 해제
    return 0;
}
