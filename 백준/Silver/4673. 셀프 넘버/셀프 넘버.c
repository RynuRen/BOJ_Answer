#include <stdio.h>
#include <stdlib.h>
void nselfnum(int*);
int main(void)
{
    int* nselnum=(int*)calloc(10001,sizeof(int));
    if(nselnum==NULL){
        printf("Alloc Memory Error!");
        return -1;
    }
    nselfnum(nselnum);
    for(int i=0;i<10000;i++)
        if(nselnum[i]!=1)
            printf("%d \n", i);
    free(nselnum);
    return 0;
}
void nselfnum(int* n)
{
    int i, j;
    for(i=0;i<10000;i++)
    {
        if(i<10){
            j=i+i;
            n[j]=1;
        }
        else if(i<100){
            j=i+i/10+i%10;
            n[j]=1;
        }
        else if(i<1000){
            j=i+i/100+(i%100)/10+i%10;
            n[j]=1;
        }
        else if(i<10000){
            j=i+i/1000+(i%1000)/100+(i%100)/10+i%10;
            if(j>10000)
                continue;
            n[j]=1;
        }
    }
}