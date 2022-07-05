#include <stdio.h>
#include <math.h>
void Hanoi(int, int, int, int);
int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d\n", (int)pow(2, n)-1);
    Hanoi(n, 1, 3, 2);
    return 0;
}
void Hanoi(int n, int st, int ds, int via)    //이동 경로 출력(갯수, 시작, 도착, 경유)
{
    if(n==1)
        printf("%d %d\n", st, ds);        //n이 1일 경우 경유 필요없이 바로 [시작]->[도착]
    else
    {                              //==n개의 원판 이동 큰 흐름==
        Hanoi(n-1, st, via, ds);   //①n-1의 원판들을 [시작]에서 [경유]로 [도착]을 경유해 이동
        printf("%d %d\n", st, ds); //②가장 큰 n원판을 [시작]에서 [도착]으로 이동
        Hanoi(n-1, via, ds, st);   //③옮겨둔 n-1의 원판들을 [경유]에서 [도착]으로 [시작]을 경유해 이동
    }
}