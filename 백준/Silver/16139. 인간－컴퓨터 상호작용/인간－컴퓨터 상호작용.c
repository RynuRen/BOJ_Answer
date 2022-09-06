#include <stdio.h>
#include <string.h>

char str[200001];
int sum[200001];

int main(void)
{
    int q, l, r;
    char alp;
    scanf("%s %d", str, &q);
    for(int i=0;i<q;i++){
        int num=0;
        scanf(" %c %d %d", &alp, &l, &r); //개행문자 처리를 위해 %c 앞을 비움
        for(int j=1;j<=strlen(str);j++){
            if(str[j-1]==alp){
                num++;
            }
            sum[j]=num;
        }
        printf("%d\n", sum[r+1]-sum[l]);
    }
    return 0;
}