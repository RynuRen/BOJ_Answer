#include <stdio.h>
#include <string.h> //strcmp 함수
#define MAX_DEQUE_SIZE 10000

void push_front(int);
void push_back(int);
int pop_front(void);
int pop_back(void);
int size(void);
int empty(void);
int front(void);
int back(void);

int deque[MAX_DEQUE_SIZE];
int front_idx, rear_idx;

int main(void)
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        char order[11];
        scanf("%s", order);
        if(!strcmp(order, "push_front")){
            int x;
            scanf("%d", &x);
            push_front(x);
        }
        else if(!strcmp(order, "push_back")){
            int x;
            scanf("%d", &x);
            push_back(x);
        }
        else if(!strcmp(order, "pop_front")){
            printf("%d\n", pop_front());
        }
        else if(!strcmp(order, "pop_back")){
            printf("%d\n", pop_back());
        }
        else if(!strcmp(order, "size")){
            printf("%d\n", size());
        }
        else if(!strcmp(order, "empty")){
            printf("%d\n", empty());
        }
        else if(!strcmp(order, "front")){
            printf("%d\n", front());
        }
        else if(!strcmp(order, "back")){
            printf("%d\n", back());
        }
    }
    return 0;
}
//front는 빈곳을 가리키고 rear는 맨 끝에 저장된 항목을 가리킨다
//덱을 원형이라 생각하고 덱의 맨 앞에 저장
void push_front(int x)
{
    deque[front_idx]=x;
    front_idx=(front_idx-1+MAX_DEQUE_SIZE)%MAX_DEQUE_SIZE;
}
//덱의 맨 뒤에 저장
void push_back(int x)
{
    rear_idx=(rear_idx+1)%MAX_DEQUE_SIZE;
    deque[rear_idx]=x;
}
int pop_front(void)
{
    if(front_idx==rear_idx){
        return -1;
    }
    front_idx=(front_idx+1)%MAX_DEQUE_SIZE;
    return deque[front_idx];
}
int pop_back(void)
{
    if(front_idx==rear_idx){
        return -1;
    }
    int tmp=deque[rear_idx];
    rear_idx=(rear_idx-1+MAX_DEQUE_SIZE)%MAX_DEQUE_SIZE;
    return tmp;
}
int size(void)
{
    return (rear_idx-front_idx+MAX_DEQUE_SIZE)%MAX_DEQUE_SIZE;
}
//덱이 비었다면 1, 아니면 0
int empty(void)
{
    if(front_idx==rear_idx){
        return 1;
    }
    else{
        return 0;
    }
}
int front(void){
    if(front_idx==rear_idx){
        return -1;
    }
    return deque[(front_idx+1)%MAX_DEQUE_SIZE];
}
int back(void){
    if(front_idx==rear_idx){
        return -1;
    }
    return deque[rear_idx];
}