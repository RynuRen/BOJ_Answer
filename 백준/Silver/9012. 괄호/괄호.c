#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        int ck=0;
        char ps[51]={0,};
        scanf("%s", ps);
        for(int j=0;ps[j]!=0;j++){
            if(ps[j]=='('){
                ck++;
            }
            else if(ps[j]==')'){
                ck--;
            }
            if(ck<0){
                break;
            }
        }
        if(ck==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}