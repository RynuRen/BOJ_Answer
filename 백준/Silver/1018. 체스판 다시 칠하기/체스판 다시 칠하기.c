#include <stdio.h>
int main(void)
{
    int n, m, i, j, k, l;
    int min=65, cntB, cntW;    //최소값을 8X8을 모두 칠할 때의 값이 64보다 높게 초기화
    char a[50][51]={0};
    scanf("%d %d", &n, &m);    //세로n 가로m
    for(i=0;i<n;i++)
        scanf("%s", &a[i]);
    
    for(k=0;k+8<=n;k++)        //세로크기 8 위치설정
        for(l=0;l+8<=m;l++)    //가로크기 8 위치설정
        {
            cntB=0, cntW=0;    //BWBW..식: cntB, WBWB..식: cntW
            for(i=0+k;i<8+k;i++)
            {
                for(j=0+l;j<8+l;j++)
                {
                    if(i%2==0){        //시작부터 홀수 줄일 때
                        if(j%2==0&&a[i][j]!='B')         //시작부터 홀수 번째 정사각형
                            cntB++;
                        else if(j%2==0&&a[i][j]!='W')
                            cntW++;
                        else if(j%2==1&&a[i][j]!='W')    //시작부터 짝수 번째 정사각형
                            cntB++;
                        else if(j%2==1&&a[i][j]!='B')
                            cntW++;
                    }
                    else{              //짝수 줄일 때
                        if(j%2==0&&a[i][j]!='W')
                            cntB++;
                        else if(j%2==0&&a[i][j]!='B')
                            cntW++;
                        else if(j%2==1&&a[i][j]!='B')
                            cntB++;
                        else if(j%2==1&&a[i][j]!='W')
                            cntW++;
                    }
                }
            }
            if(min>cntB)
                min=cntB;           
            if(min>cntW)
                min=cntW;
        }
        printf("%d\n", min);
    return 0;
}