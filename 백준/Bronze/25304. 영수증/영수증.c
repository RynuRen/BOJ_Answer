#include <stdio.h>

int main(void)
{
    int X, N, a, b, sum=0;
    scanf("%d %d", &X, &N);
    for(int i=0;i<N;i++){
        scanf("%d %d", &a, &b);
        sum+=a*b;
    }
    printf("%s\n", X==sum?"Yes":"No");
    return 0;
}