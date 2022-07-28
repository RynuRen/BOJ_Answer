#include <stdio.h>
#include <string.h> //strcmp 함수

void Push(int);
int Pop(void);
int Size(void);
int Empty(void);
int Top(void);

int stack[10000];   //최대명령 10000 전부 push일 경우
int top_idx;

int main(void)
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        char order[6];
        scanf("%s", order);
        if(!strcmp(order, "push")){
            int x;
            scanf("%d\n", &x);
            Push(x);
        }
        else if(!strcmp(order, "pop")){
            printf("%d\n", Pop());
        }
        else if(!strcmp(order, "size")){
            printf("%d\n", Size());
        }
        else if(!strcmp(order, "empty")){
            printf("%d\n", Empty());
        }
        else if(!strcmp(order, "top")){
            printf("%d\n", Top());
        }
    }
    return 0;
}
//스택에 저장
void Push(int x)
{
    stack[top_idx++]=x;
}
//저장된 정수를 뺀 뒤 반환, 스택이 비었으면 -1
int Pop(void)
{
    if(!top_idx){
        return -1;
    }
    else{
        return stack[--top_idx];
    }
}
int Size(void)
{
    return top_idx;
}
//비었다면 1, 아니면 0
int Empty(void)
{
    if(!top_idx){
        return 1;
    }
    else{
        return 0;
    }
}
//가장 최근 정수 반환, 스택이 비었으면 -1
int Top(void)
{
    if(!top_idx){
        return -1;
    }
    else{
        return stack[top_idx-1];
    }
}