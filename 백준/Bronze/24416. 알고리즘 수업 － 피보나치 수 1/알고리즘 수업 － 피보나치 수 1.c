#include <stdio.h>
int f[41];
int fib(int, int*);
int fibonacci(int, int*);
int main(void)
{
    int n, cnt1=0, cnt2=0;
    scanf("%d", &n);
    fib(n, &cnt1);
    fibonacci(n, &cnt2);
    printf("%d %d\n", cnt1, cnt2);
    return 0;
}
//코드1: 재귀호출
int fib(int n, int* cnt)
{
    if(n==1 || n==2){
        (*cnt)++;
        return 1;
    }
    else
        return (fib(n-1, cnt)+fib(n-2, cnt));
}
//코드2: 동적 프로그래밍
int fibonacci(int n, int* cnt)
{
    f[1]=1, f[2]=1;
    for(int i=3;i<=n;i++){
        f[i]=f[i-1]+f[i-2];
        (*cnt)++;
    }
    return f[n];
}