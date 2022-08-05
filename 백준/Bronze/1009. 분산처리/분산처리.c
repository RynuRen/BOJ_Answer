#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        int a, b;
        int rst=1;
        scanf("%d %d", &a, &b);
        for(int j=0;j<b;j++){
            rst=rst*a%10;   //모듈러 연산
        }
        rst%=10;
        if(rst==0){
            printf("%d\n", 10);
        }
        else{
            printf("%d\n", rst);
        }
    }
    return 0;
}