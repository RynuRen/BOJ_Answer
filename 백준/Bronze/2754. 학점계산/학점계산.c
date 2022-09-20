#include <stdio.h>

int main(void)
{
    char grade[3];
    float point;
    scanf("%s", grade); //'A'=65
    if(grade[0]=='F'){
        point=0.0;
    }
    else{
        point=69-grade[0];
        if(grade[1]=='+'){
            point+=0.3;
        }
        else if(grade[1]=='-'){
            point-=0.3;
        }
    }
    printf("%.1f\n", point);
    return 0;
}