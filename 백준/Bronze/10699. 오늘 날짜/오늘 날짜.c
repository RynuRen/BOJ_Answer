#include <stdio.h>
#include <time.h>

int main(void)
{
    struct tm *t;
    time_t now;
    now=time(NULL);
    t=localtime(&now);
    //year: 1900부터 0, month: 0~11값, %02d: 2칸을 공백은 0으로 채워서 표현
    printf("%d-%02d-%02d", t->tm_year+1900, t->tm_mon+1, t->tm_mday);
    return 0;
}