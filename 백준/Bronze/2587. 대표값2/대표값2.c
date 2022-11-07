#include <stdio.h>
#include <stdlib.h> // qsort함수

int compare(const void*, const void*);
int main(void)
{
    int arr[5];
    int sum=0;
    for(int i=0;i<5;i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    qsort(arr, 5, sizeof(int), compare);
    printf("%d\n%d", sum/5, arr[2]);
    return 0;
}
int compare(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}