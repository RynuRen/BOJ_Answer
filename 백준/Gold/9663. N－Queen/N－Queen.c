#include <stdio.h>
#include <stdlib.h>    //abs 함수

int n, cnt=0;
int chess[15]={0,};
void queen(int);
int promising(int);
int main(void)
{
    scanf("%d", &n);
    queen(0);
    printf("%d\n", cnt);
    return (0);
}
void queen(int q)        //받은 매개변수는 퀸을 둔 행
{
    if(promising(q)){    //유망도 체크
        if(q==n){        //마지막 행까지 놓았나 확인
            cnt++;
            return;
        }
        else{
            for(int i=1;i<=n;i++){ //다음 퀸을 놓을 행의 열들을 탐색
                chess[q+1]=i;
                queen(q+1);
            }
        }
    }
}
int promising(int q)
{
    for(int i=1;i<q;i++)    //이전 퀸(j,chess[j])들과 비교
        //이전 퀸과 열 위치가 같음    //이전 퀸과 대각에 위치
        if(chess[i]==chess[q] || abs(q-i)==abs(chess[q]-chess[i]))
            return (0);
    return (1);
}