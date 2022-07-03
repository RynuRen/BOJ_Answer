#include <stdio.h>
#include <string.h>
void ReverseNum(char*);
int main(void)
{
    char a[10002]={0};
    char b[10002]={0};
    char rst[10003]={0};
    int len, i, add=0;
    scanf("%s %s", a, b);
    ReverseNum(a);
    ReverseNum(b);
    if(strlen(a)>strlen(b))
        len=strlen(a);
    else
        len=strlen(b);
    
    for(i=0;i<len;i++)
    {
        rst[i]=a[i]+b[i]-'0'+add;
        if(a[i]==0||b[i]==0)
            rst[i]+='0';
        
        if(rst[i]>'9'){
            rst[i]-=10;
            add=1;
        }
        else
            add=0;
    }
    if(add==1)
        rst[len]='1';
    
    ReverseNum(rst);
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
        a[i]=a[len-i-1];
        a[len-i-1]=tmp;
    }
}