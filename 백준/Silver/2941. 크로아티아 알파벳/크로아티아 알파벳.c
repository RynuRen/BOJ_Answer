#include <stdio.h>
int main(void)
{
    char ch[101]={0,};
    int i, cnt=0;
    scanf("%s", ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>='a'&&ch[i]<='z'){    //알파벳 일 경우
            if(i>0&&ch[i]=='z'&&ch[i-1]=='d'&&ch[i+1]=='=')    //dz= 일 경우 d를 cnt 안함
                continue;
            else if(ch[i]=='j'&&(ch[i-1]=='n'||ch[i-1]=='l'))  //nj,lj 일 경우 j를 cnt 안함
                continue;
            else
                cnt++;
        }
    }
    printf("%d \n", cnt);
    return 0;
}