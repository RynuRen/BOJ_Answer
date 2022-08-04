#include <stdio.h>

int stack[100000];
int top;

void push(int);
int pop(void);

int main(void)
{
    int k, tmp, sum=0;
    scanf("%d", &k);
    for(int i=0;i<k;i++){
        scanf("%d", &tmp);
        if(tmp==0){
            sum-=pop();
        }
        else{
            sum+=tmp;
            push(tmp);
        }
    }
    printf("%d\n", sum);
    return 0;
}
void push(int x)
{
    stack[top++]=x;
}
int pop(void)
{
    return stack[--top];
}