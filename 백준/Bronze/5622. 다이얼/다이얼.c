#include <stdio.h>
int main(void)
{
    char a[16];
    int i, sec=0;
    scanf("%s", a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='A'||a[i]=='B'||a[i]=='C')
            sec+=3;
        else if(a[i]=='D'||a[i]=='E'||a[i]=='F')
            sec+=4;
        else if(a[i]=='G'||a[i]=='H'||a[i]=='I')
            sec+=5;
        else if(a[i]=='J'||a[i]=='K'||a[i]=='L')
            sec+=6;
        else if(a[i]=='M'||a[i]=='N'||a[i]=='O')
            sec+=7;
        else if(a[i]=='P'||a[i]=='Q'||a[i]=='R'||a[i]=='S')
            sec+=8;
        else if(a[i]=='T'||a[i]=='U'||a[i]=='V')
            sec+=9;
        else if(a[i]=='W'||a[i]=='X'||a[i]=='Y'||a[i]=='Z')
            sec+=10;
    }
    printf("%d \n", sec);
    return 0;
}