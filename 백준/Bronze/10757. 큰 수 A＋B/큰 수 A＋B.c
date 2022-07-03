#include <stdio.h>
#include <string.h>             //strlen 함수를 쓰기위해

void ReverseNum(char*);
int main(void)
{
    char a[10002]={0};           //10의 2승은 3자리 3승은 4자리 므로 10의 10000승은 10001자리이다
    char b[10002]={0};
    char rst[10003]={0};         //두 수의 합이 올림이 되어 자리 수 하나가 늘어날 수 있기에 한자리 더 넓게 잡는다
    int len, i, add=0;
    scanf("%s %s", a, b);
    
    ReverseNum(a);               //합을 구하려면 문자열을 뒤집어서 처음부터 더해 나가는게 편리하다
    ReverseNum(b);
    
    if(strlen(a)>strlen(b))      //두 숫자 중 더 긴 길이를 기준으로 한다
        len=strlen(a);
    else
        len=strlen(b);
    
    for(i=0;i<len;i++)
    {
        rst[i]=a[i]+b[i]-'0'+add;   //두 숫자의 문자열 합은 아스키 코드 값을 더한 것이므로 중복된 '0'값을 빼고, 자리 올림이 있다면 더해준다
        if(a[i]==0||b[i]==0)
            rst[i]+='0';            //두 숫자의 자릿수가 맞지 않아 한 숫자에 이미 NULL(0)이 있다면 위 식에서 '0'값을 뺀것을 되돌린다
        
        if(rst[i]>'9'){             //합의 결과 아스키 코드 값이 '9'를 넘을 경우
            rst[i]-=10;             //10을 빼서 나머지를 배열에 넣고
            add=1;                  //자리 올림 해준다
        }
        else
            add=0;                  //자리 올림을 초기화 해준다
    }
    if(add==1)
        rst[len]='1';               //마지막 자리에서 자리 올림이 있을 경우 끝에 1을 추가해준다
    
    ReverseNum(rst);                //결과값을 뒤집어준다
    printf("%s \n", rst);
    return 0;
}
void ReverseNum(char* a)
{
    char tmp;
    int i, len=strlen(a);
    for(i=0;i<len/2;i++)
    {
        tmp=a[i];
        a[i]=a[len-i-1];            //a[len]은 \0이기에 -1을 해준다
        a[len-i-1]=tmp;
    }
}
