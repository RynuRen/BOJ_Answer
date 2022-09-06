#include <stdio.h>
#include <string.h>    //strcmp, strcpy 함수
typedef struct{
    char kind[21];
    int num_kind;
}Closet;
int main(void)
{
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        int n, day=1, input_ckind=0;
        char c[21], ckind[21];
        Closet cloth[30];
        scanf("%d", &n);
        for(int j=0;j<n;j++){
            scanf("%s %s", c, ckind);
            //의상종류 중복체크
            int k;
            for(k=0;k<input_ckind;k++)
                if(strcmp(cloth[k].kind, ckind)==0){
                    cloth[k].num_kind++;
                    break;
                }
            //새 의상종류 추가
            if(k==input_ckind){
                strcpy(cloth[input_ckind].kind, ckind);
                cloth[input_ckind].num_kind=1;
                input_ckind++;
            }
        }
        //의상종류에 선택하지 않는 경우 1을 더해 모두 곱하면 의상조합의 경우의 수
        for(int l=0;l<input_ckind;l++)
            day*=cloth[l].num_kind+1;
        //의상조합의 경우의 수에 모두 선택하지 않는 경우 1을 뺌
        printf("%d\n", day-1);
    }
    return 0;
}