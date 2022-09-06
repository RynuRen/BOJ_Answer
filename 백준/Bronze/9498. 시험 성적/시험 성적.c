#include <stdio.h>

int main(void)
{
    int tst;
    scanf("%d", &tst);
    if (tst<60)
        printf("F \n");
    else if(tst<70)
        printf("D \n");
    else if (tst<80)
        printf("C \n");
    else if (tst<90)
        printf("B \n");
    else
        printf("A \n");    
    return 0;    
}