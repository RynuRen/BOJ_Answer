#include <stdio.h>
#define M 1234567891

long long hash(char*, int);

int main(void)
{
    int L;
    char str[51];
    scanf("%d %s", &L, str);
    printf("%lld\n", hash(str, L));
    return 0;
}
long long hash(char* str, int L)
{
    long long val=0, R=1;
    for(int i=0;i<L;i++){
        val=(val+(str[i]-96)*R)%M; //a의 아스키코드가 97이므로
        R=(R*31)%M;
    }
    return val;
}