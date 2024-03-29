#include <stdio.h>

int arrw[21][21][21];
int w(int, int, int);
int main(void)
{
    int a, b, c;
    while(1){
        scanf("%d %d %d", &a, &b, &c);
        if(a==-1 && b==-1 && c==-1)
            break;
        printf("w(%d, %d, %d) = %d\n", a, b, c, w(a, b, c));
    }
    return 0;
}
int w(int a, int b, int c)
{
    if(a<=0 || b<=0 || c<=0)
        return 1;
    else if(a>20 || b>20 || c>20){
        if(arrw[20][20][20]==0)
            w(20, 20, 20);
        return arrw[20][20][20];
    }
    else{
        if(arrw[a][b][c]==0){
            if(a<b && b<c)
                arrw[a][b][c]=w(a, b, c-1)+w(a, b-1, c-1)-w(a, b-1, c);
            else
                arrw[a][b][c]=w(a-1, b, c)+w(a-1, b-1, c)+w(a-1, b, c-1)-w(a-1, b-1, c-1);
        }
        return arrw[a][b][c];
    }
}