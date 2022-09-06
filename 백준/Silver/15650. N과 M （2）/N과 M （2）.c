#include <stdio.h>

int ck[9];
int arr[9];
void DFS(int, int*, int*);
int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);
    DFS(0, &n, &m);
    return (0);
}
void DFS(int depth, int* n, int* m)
{
    int i;
    if(depth==*m){
        for(i=0;i<*m;i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    else{
        for(i=1;i<=*n;i++)
            if(ck[i]==0)
                if(depth==0 || arr[depth-1]<i){
                    arr[depth]=i;
                    ck[i]=1;
                    DFS(depth+1, n, m);
                    ck[i]=0;
                }
    }
}