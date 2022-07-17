#include <stdio.h>
int get_gcd(int, int);
int main(void)
{
    int n, a, b, gcd;
    scanf("%d", &n);    //3<=n<=100
    //원둘레:2*PI*r
    //첫원이 한바퀴: 2*PI*x1 둘째원:(2*PI*x1)/(2*PI*x2)=x1/x2
    //기약분수: 분자, 분모가 서로소 //약분을 위해 최대공약수로 나눠줌
    for(int i=0;i<n;i++){
        scanf("%d", &a);
        if(i==0){
            b=a;
            continue;
        }
        gcd=get_gcd(a, b);
        printf("%d/%d\n", b/gcd, a/gcd);
    }
    return 0;
}
int get_gcd(int a, int b)
{
    int i;
    while(b!=0)
    {
        i=a%b;
        a=b;
        b=i;
    }
    return a;
}