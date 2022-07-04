#include <stdio.h>
int main(void)
{
    int a, b, v, day;
    scanf("%d %d %d", &a, &b, &v);
    
    /*                  //반복문을 사용하면 숫자가 커짐에 따라 반복에 시간이 걸려 문제에서 제한한 시간 0.15초를 넘어버린다
    day = 0;
    int sum = 0;
    while (1)
    {
        sum += a;
        day++;
        if (sum >= v)
            break;
        sum -= b;
    }
    */
    
    /*
    for (day = 0;;day++)
        if((a - b)*day >= v - b)
            break;
    */
    
    day=(v-b)/(a-b);
    if((v-b)%(a-b)!=0)     //나머지가 있으면 올라가는데 하루가 더 소모된다
        day+=1;
    
    printf("%d", day);
    return 0;
}
