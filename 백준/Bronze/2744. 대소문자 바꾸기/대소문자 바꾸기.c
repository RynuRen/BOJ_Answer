#include <stdio.h>

int main(void)
{
    char word[101];
    scanf("%s", word);
    for(int i=0;word[i];i++){ //a:97, A:65
        if(word[i]>='a' && word[i]<='z'){
            word[i] -= 32;
        }
        else{
            word[i] += 32;
        }
    }
    printf("%s\n", word);
    return 0;
}