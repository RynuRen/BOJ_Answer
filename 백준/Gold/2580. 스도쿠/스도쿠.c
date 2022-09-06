#include <stdio.h>
#include <stdlib.h>

int s[9][9];
void Fill_s(int);
void checker(int, int, int*);
void Print_s(void);
int main(void)
{
    for(int i=0;i<9;i++)
        for(int j=0;j<9;j++)
            scanf("%d", &s[i][j]);
    Fill_s(0);
}
void Fill_s(int cnt)
{
    if(cnt==81){    //9x9 칸을 모두 확인
        Print_s();
        exit(0);    //만족하는 경우의 수 하나만 출력하고 종료
    }
    else{
        int idx1=cnt/9;
        int idx2=cnt%9;
        //빈칸 확인
        if(s[idx1][idx2]!=0)
            Fill_s(cnt+1);  //다음 칸으로
        else
            checker(idx1, idx2, &cnt);
    }
}
void checker(int a, int b, int* cnt)
{
    //3x3 정사각형 위치 확인
    int low_buf=0, col_buf=0;
    if(a>5)
        low_buf=6;
    else if(a>2)
        low_buf=3;
    if(b>5)
        col_buf=6;
    else if(b>2)
        col_buf=3;
    //1부터 9까지 대입해 체크
    for(int i=1;i<=9;i++){
        s[a][b]=i;
        int ck=0;
        for(int j=0;j<9;j++) //↓가로 중복 확인   //↓세로 중복 확인
            if((j!=b && s[a][j]==i) || (j!=a && s[j][b]==i))
                ck=1;        
        //3x3 정사각형 내의 중복 확인
        for(int k=0;k<3;k++)
            for(int l=0;l<3;l++)
                if(s[k+low_buf][l+col_buf]==i && (k+low_buf!=a || l+col_buf!=b))
                    ck=1;
        if(!ck) //ck가 중복조건을 통과해 0일 때
            Fill_s((*cnt)+1);
        //만족하는 경우의 수가 없어 재귀에서 벗어날 경우를 대비해 빈칸으로 돌려둠
        s[a][b]=0;
    }
}
void Print_s(void)
{
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++)
            printf("%d ", s[i][j]);
        printf("\n");
    }
}