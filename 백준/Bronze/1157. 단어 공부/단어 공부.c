#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i, j, cnt, max=0;
    char rst, a='a', b='A';
    int alp[26];
    char* str=(char*)calloc(1000000,sizeof(char));
    if(str==NULL)
        printf("Alloc Memoey Error!!");
    scanf("%s", str);
    for(i=0;i<26;i++,a++,b++)
    {
        cnt=0;
        for(j=0;str[j]!='\0';j++)
            if(str[j]==a||str[j]==b)
                cnt++;
        alp[i]=cnt;
    }
    for(i=0;i<26;i++)
        if(alp[i]>max){
            max=alp[i];
            rst=i;
        }
    for(i=0;i<26;i++)
        if(alp[i]==max&&i!=rst)
            rst='?'-65;
    printf("%c", rst+65);
    return 0;
}