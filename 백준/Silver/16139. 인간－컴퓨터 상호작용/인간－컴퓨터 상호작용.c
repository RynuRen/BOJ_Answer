#include <stdio.h>
#include <string.h>

char str[200001];
int sum[26][200000];

int main(void)
{
    int q, l, r, len, rst;
    char alp;
    scanf("%s %d", str, &q);
    len = strlen(str);
    //sum[a][b]: 아스키코드 a+97에 해당하는 알파벳의 idx가 b까지인 누적합
    //idx b에 a+97 알파벳이 있다고 표시
    for(int i=0;i<len;i++){
        sum[str[i]-97][i]++;   //a의 아스키코드가 97이므로
    }
    //idx b까지의 누적합 연산
    for(int i=1;i<len;i++){
        for(int j=0;j<26;j++){
            sum[j][i]+=sum[j][i-1];
        }
    }

    for(int i=0;i<q;i++){
        scanf(" %c %d %d", &alp, &l, &r); //개행문자 처리를 위해 %c 앞을 비움
        if(l==0){
            rst=sum[alp-97][r];
        }
        else{
            rst=sum[alp-97][r]-sum[alp-97][l-1];
        }
        printf("%d\n", rst);
    }
    return 0;
}