#include <stdio.h>
int gcd(int, int);
int main(void)
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    c=gcd(a, b);
    printf("%d\n", c);
    printf("%d\n", a*b/c);
    return 0;
}
//유클리드 호제법(Euclidean algorithm) 최대공약수(Greatest Common Divisor)
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