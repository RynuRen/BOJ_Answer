#include <stdio.h>
int main(void)
{
    int ax, ay;
    int bx, by;
    int cx, cy;
    scanf("%d %d", &ax, &ay);
    scanf("%d %d", &bx, &by);
    scanf("%d %d", &cx, &cy);
                                           //^: 비트연산자 XOR
    printf("%d %d\n", ax^bx^cx, ay^by^cy); //  비트단위로 다르면 1 같으면 0
                                           //  다른값만 남게됨
    return 0;
}