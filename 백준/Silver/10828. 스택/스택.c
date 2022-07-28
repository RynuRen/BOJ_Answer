//백준 9012 실버4 괄호
#include <stdio.h>
#include <string.h> //strcmp 함수

void Push(int);
int Pop(void);
int Size(void);
int Empty(void);
int Top(void);

enum menu {push, pop, size, empty, top};

int stack[10000];
int top_idx;

int main(void)
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        char order[6];
        enum menu orders=0;
        scanf("%s", order);
        //입력된 명령을 열거형으로 변환
        if(!strcmp(order, "push\0")){
            orders=push;
        }
        else if(!strcmp(order, "pop\0")){
            orders=pop;
        }
        else if(!strcmp(order, "size\0")){
            orders=size;
        }
        else if(!strcmp(order, "empty\0")){
            orders=empty;
        }
        else if(!strcmp(order, "top\0")){
            orders=top;
        }
        //열거형으로 명령 스위치
        switch(orders){
            case push:
                int x;
                scanf("%d\n", &x);
                Push(x);
                break;
            case pop:
                printf("%d\n", Pop());
                break;
            case size:
                printf("%d\n", Size());
                break;
            case empty:
                printf("%d\n", Empty());
                break;
            case top:
                printf("%d\n", Top());
                break;
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