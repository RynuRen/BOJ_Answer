#include <stdio.h>
#include <stdlib.h>//calloc함수
int main(void)
{
    int i, cnt=0;
    char* a=(char*)calloc(1000001,sizeof(char));     //문자열은 마지막에 \0이 붙기에 항상 최대크기보다 하나더 크게 할당해 줘야 한다
    scanf("%[^\n]", a);                 //공백이 있더라도 개행문자 \n이 입력될 때까지 전부 입력받음
    if(a[0]!=' '&&a[0]!='\0')       //첫 글자가 공백이나 EOF가 아니면 카운트
        cnt++;
    for(i=1;a[i]!='\0';i++)
    {
        if(a[i-1]==' '&&a[i]!=' ')  //이전 글자가 공백이고 해당 글자가 공백이 아니면 카운트
            cnt++;
    }
    printf("%d \n", cnt);
    free(a);
    return 0;
}
