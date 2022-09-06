#include <stdio.h>

int main(void)
{
    int n, k, i;
    int cnt=0;
    int coin[10];
    scanf("%d %d", &n, &k);
    for(i=0;i<n;i++){
        scanf("%d", &coin[i]);
    }
    //입력받은 동전의 가치를 내림차순으로 k에 빼줘서 0원이 될 때까지
    i=n-1;
    while(k>0){
        if(k>=coin[i]){
            k-=coin[i];
            cnt++;
        }
        else{
            i--;
        }
    }
    printf("%d\n", cnt);
    return 0;
}