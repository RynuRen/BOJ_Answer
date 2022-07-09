#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int x;
    int y;
}Point;
int compare(const void*, const void*);
int main(void)
{
    Point N[100000]={0,};
    int n, i;
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d %d", &N[i].x, &N[i].y);
    
    qsort(N, n, sizeof(Point), compare);
    
    for(i=0;i<n;i++)
        printf("%d %d\n", N[i].x, N[i].y);
    return 0;
}
int compare(const void* a, const void* b)
{
    if((((Point*)a)->y>((Point*)b)->y)||(((Point*)a)->y==((Point*)b)->y&&((Point*)a)->x>((Point*)b)->x))
        return 1;
    else if(((Point*)a)->y<((Point*)b)->y)
        return -1;
    else
        return 0;
}