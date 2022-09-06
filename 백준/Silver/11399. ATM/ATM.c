#include <stdio.h>
#include <stdlib.h>

int p[1000];

int compare(const void*, const void*);

int main(void)
{
    int n, sum=0, ans=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &p[i]);
    }
    qsort(p, n, sizeof(int), compare);
    for(int i=0;i<n;i++){
        sum+=p[i];
        ans+=sum;
    }
    printf("%d\n", ans);
    return 0;
}
int compare(const void* a, const void* b){
    return *(int*)a-*(int*)b;
}