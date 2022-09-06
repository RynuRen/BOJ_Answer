#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>    //M_PI
int main(void)
{
    double r;
    scanf("%lf", &r);
    
    printf("%f\n", M_PI*r*r);
    printf("%f\n", 2*r*r);
    
    return 0;
}