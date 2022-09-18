#include <stdio.h>
#include <string.h>     //strlen 함수

int main(void)
{
    char word[101];
    scanf("%s", word);
    printf("%d\n", strlen(word));
    return 0;
}