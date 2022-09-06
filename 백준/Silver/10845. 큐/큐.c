#include <stdio.h>
#include <string.h> //strcmp 함수

void Push(int);
int Pop(void);
int Size(void);
int Empty(void);
int Front(void);
int Back(void);

int queue[10000];   //최대명령 10000 전부 push일 경우
int front_idx, rear_idx;

int main(void)
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        char order[6];
        scanf("%s", order);
        if(!strcmp(order, "push")){
            int x;
            scanf("%d", &x);
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
        else if(!strcmp(order, "front")){
            printf("%d\n", Front());
        }
        else if(!strcmp(order, "back")){
            printf("%d\n", Back());
        }
    }
    return 0;
}
//큐의 끝에 저장
void Push(int x)
{
    queue[rear_idx++]=x;
}
//가장 앞에 저장된 정수를 뺀 뒤 반환, 큐가 비었으면 -1
int Pop(void)
{
    if(front_idx==rear_idx){
        return -1;
    }
    return queue[front_idx++];
}
int Size(void)
{
    return rear_idx-front_idx;
}
//큐가 비었다면 1, 아니면 0
int Empty(void)
{
    if(front_idx==rear_idx){
        return 1;
    }
    else{
        return 0;
    }
}
//가장 앞에 저장된 정수 반환, 큐가 비었으면 -1
int Front(void)
{
    if(front_idx==rear_idx){
        return -1;
    }
    return queue[front_idx];
}
//가장 마지막에 저장된 정수 반환, 큐가 비었으면 -1
int Back(void)
{
    if(front_idx==rear_idx){
        return -1;
    }
    return queue[rear_idx-1];
}