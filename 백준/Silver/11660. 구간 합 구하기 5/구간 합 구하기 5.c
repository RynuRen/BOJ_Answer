#include <stdio.h>

int sum[1025][1025];    //sum[i][j]: (1,1)부터 (i,j)까지의 합

int main(void)
{
    int n, m, num;
    scanf("%d %d", &n, &m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d", &num);
            sum[i][j]=num+sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1];
        }
    }
    //(x1,y1)부터 (x2,y2)까지의 합
    //  = (x2,y2)누적합 - (x2,y1-1)누적합 - (x1-1,y2)누적합 + (x1-1,y1-1)누적합
    for(int i=0;i<m;i++){
        int x1, y1, x2, y2, rst;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        rst=sum[x2][y2]-sum[x2][y1-1]-sum[x1-1][y2]+sum[x1-1][y1-1];
        printf("%d\n", rst);
    }
    return 0;
}