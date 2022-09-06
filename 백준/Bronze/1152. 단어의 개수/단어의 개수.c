#include <stdio.h>
#include <stdlib.h>//calloc함수
int main(void)
{
    int i, cnt=0;
    char* a=(char*)calloc(1000001,sizeof(char));
    scanf("%[^\n]", a);
    if(a[0]!=' '&&a[0]!='\0')
        cnt++;
    for(i=1;a[i]!='\0';i++)
    {
        if(a[i-1]==' '&&a[i]!=' ')
            cnt++;
    }
    printf("%d \n", cnt);
    free(a);
    return 0;
}