#include <stdio.h>
int main(void)
{
    int t, i, j, po, sum;
    char rst[80];
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%s", rst);
        j=0;
        po=0;
        sum=0;
        while(1)
        {
            if(rst[j]=='\0')
                break;
            else if(rst[j]=='O')
                po++;
            else
                po=0;
            sum+=po;
            j++;
        }
        printf("%d \n", sum);
    }
    return 0;
}