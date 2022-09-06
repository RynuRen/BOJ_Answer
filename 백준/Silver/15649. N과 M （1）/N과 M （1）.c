#include <stdio.h>
int ck[9];    //중복 확인 배열
int arr[9];   //출력할 숫자 넣은 배열
void DFS(int, int*, int*);
int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    DFS(0, &n, &m);
    return 0;
}
//깊이 우선 탐색 DFS(Depth First Search)
void DFS(int depth, int* n, int* m)
{
    int i;
    if(depth==*m){        //숫자를 모두 골랐다면
        for(i=0;i<*m;i++) //배열을 출력
            printf("%d ", arr[i]);
        printf("\n");
    }
    else
        for(i=1;i<=*n;i++)
            if(ck[i]==0){    //중복으로 고르지 않았다면
                arr[depth]=i;//출력할 배열에 넣고
                ck[i]=1;     //중복표시
                DFS(depth+1, n, m); //다음 차례의 숫자를 선택
                ck[i]=0;     //출력 후 재귀에서 빠져나와 중복표시 제거
            }
}