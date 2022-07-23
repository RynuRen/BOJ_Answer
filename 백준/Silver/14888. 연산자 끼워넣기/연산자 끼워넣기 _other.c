#include <stdio.h>

int n, max=-1000000000, min=1000000000;
int arr[11];
void fnc(int, int, int, int, int, int);
int main(void)
{
    int sum, sub, mult, div;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
    scanf("%d %d %d %d", &sum, &sub, &mult, &div);
    fnc(sum, sub, mult, div, 0, arr[0]);
    printf("%d\n%d\n", max, min);
    return (0);
}
void fnc(int sum, int sub, int mult, int div, int i, int rst)
{
    if(i==n-1){
        if(rst>max)
            max=rst;
        if(rst<min)
            min=rst;
    }
    if(sum>0)
        fnc(sum-1, sub, mult, div, i+1, rst+arr[i+1]);
    if(sub>0)
        fnc(sum, sub-1, mult, div, i+1, rst-arr[i+1]);
    if(mult>0)
        fnc(sum, sub, mult-1, div, i+1, rst*arr[i+1]);
    if(div>0)
        fnc(sum, sub, mult, div-1, i+1, rst/arr[i+1]);
}
