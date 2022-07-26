#include <stdio.h>

int Palindrome(int);
int main(void)
{
    int num;
    while(1){
        scanf("%d", &num);
        if(num==0)
            break;
        printf("%s", Palindrome(num)?"yes\n":"no\n");
    }
    return 0;
}
int Palindrome(int num)
{
    char num_str[6];
    int len, ck=1;
    len=sprintf(num_str, "%d", num);
    for(int i=0;i<len/2;i++)
        if(num_str[i]!=num_str[len-1-i])
            ck=0;
    return ck;
}