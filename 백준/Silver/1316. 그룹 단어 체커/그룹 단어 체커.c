#include <stdio.h>
int GroupCk(char*);
int main(void)
{
    int n, i, cnt=0;
    char a[101];
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%s", a);
        if(GroupCk(a)==0)
            cnt++;
    }
    printf("%d \n", cnt);
    return 0;
}
int GroupCk(char* a)
{
    int i, j;
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j]&&j-i!=1&&a[i]!=a[j-1])
                return 1;
        }
    }
    return 0;
}