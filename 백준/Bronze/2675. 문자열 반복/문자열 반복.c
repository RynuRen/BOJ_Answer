#include <stdio.h>
int main(void)
{
    char s[20], p[160];
    int t, r, i, j, k, l;
    scanf("%d", &t);
    if(t<1||t>1000)
        return -1;
    for(i=0;i<t;i++)
    {
        scanf("%d %s", &r, s);
        if(r<1||r>8)
            return -1;
        j=0;
        l=0;
        while(1)
        {
            for(k=0;k<r;l++,k++)
                p[l]=s[j];
            j++;
            if(s[j]=='\0'){
                p[l]=s[j];
                break;
            }
        }
        printf("%s \n", p);
    }
    return 0;
}