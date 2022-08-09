#include <stdio.h>

long long P[101];

long long Padoban(int);

int main(void)
{
    int t, n;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        scanf("%d", &n);
        printf("%lld\n", Padoban(n));
    }
    return 0;
}
long long Padoban(int n)
{
    P[1]=P[2]=P[3]=1;
    P[4]=P[5]=2;
    if(P[n]!=0){
        return P[n];
    }
    else{
        P[n]=Padoban(n-1)+Padoban(n-5);
        return P[n];
    }
}