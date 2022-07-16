#include <stdio.h>
int gcd(int, int);
int main(void)
{
    int t, a, b;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", a*b/gcd(a, b));
    }
    return 0;
}
//최대공약수
int gcd(int a, int b)
{
    int i;
    while(b!=0){
        i=a%b;
        a=b;
        b=i;
    }
    return a;
}