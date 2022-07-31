#include <stdio.h>

char stack[101];
int top;

void push(char);
char pop(void);
int isEmpty(void);
int balance(char*);

int main(void)
{
    char str[101];
    while(1){
        scanf("%[^\n]%*c", str);    //\n까지 읽어들이고 버퍼에서 \n은 제거
        if(str[0]=='.'){
            break;
        }
        if(balance(str)){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
    return 0;
}
void push(char x)
{
    stack[top++]=x;
}
char pop(void)
{
    return stack[--top];
}
int isEmpty(void)
{
    return top==0;
}
int balance(char* str)
{
    int result=1;
    for(int i=0;str[i];i++){
        if(str[i]=='('){
            push(str[i]);
        }
        else if(str[i]=='['){
            push(str[i]);
        }
        else if(str[i]==')'){
            if(isEmpty()){
                result=0;
                break;
            }
            else if(stack[top-1]=='('){
                pop();
            }
            else{
                result=0;
                break;
            }
        }
        else if(str[i]==']'){
            if(isEmpty()){
                result=0;
                break;
            }
            else if(stack[top-1]=='['){
                pop();
            }
            else{
                result=0;
                break;
            }
        }
    }
    if(!isEmpty()){
        result=0;
    }
    while(!isEmpty()){
        pop();
    }
    return result;
}