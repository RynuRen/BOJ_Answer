#include <stdio.h>

int main(void)
{
    char str[256];
    while(1){
        int cnt=0;
        scanf("%[^\n]%*c", str);
        if(str[0]=='#' && str[1]==0){
            break;
        }
        for(int i=0;str[i];i++){
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]=='o' || str[i]=='u'){
                cnt++;
            }
            if(str[i]=='A' || str[i]=='E' || str[i]=='I' ||str[i]=='O' || str[i]=='U'){
                cnt++;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}