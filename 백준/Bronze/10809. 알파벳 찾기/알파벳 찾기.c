#include <stdio.h>
int main(void)
{
    int i, j;
    char alpa;
    char a[100], alp[26];
    for(i=0;i<26;i++)
        alp[i]=-1;
    scanf("%s", a);
    for(i=0,alpa='a';i<26;i++,alpa++)
    {
        j=0;        
        while(1)
        {            
            if(a[j]=='\0')
                break;
            if(a[j]==alpa){
                alp[i]=j;
                break;
            }
            j++;
        }
    }
    for(i=0;i<26;i++)
        printf("%d ", alp[i]);
    return 0;
}