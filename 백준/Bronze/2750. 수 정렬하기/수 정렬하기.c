#include <stdio.h>
void buble_sort(int*, int);
int main(void)
{
    int n;
    int a[1000]={0,};
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    
    buble_sort(a, n);
    
    for(int i=0;i<n;i++)
        printf("%d\n", a[i]);    
    return 0;
}
//버블정렬 알고리즘
void buble_sort(int a[], int n)
{
    int tmp;
    for(int i=n-1;i>0;i--)    //첫 교환은 a[n-2]와 a[n-1]의 비교까지 진행
        for(int j=0;j<i;j++)
            if(a[j]>a[j+1]){
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
}