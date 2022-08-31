#include <stdio.h>
#include <string.h>     //strcmp 함수

void push(int);
int pop(void);
int size(void);
int empty(void);
int front(void);
int back(void);

int queue[2000000];
int front_idx, rear_idx;

int main(void)
{
    int n;
    scanf("%d", &n);
    while(n-->0){
        char order[6];
        scanf("%s", order);
        //strcmp: 같다면 0 반환, 아닐시 아스키 코드를 비교해 음수, 양수 반환
        if(!strcmp(order, "push")){
            int x;
            scanf("%d", &x);
            push(x);
        }
        else if(!strcmp(order, "pop")){
            printf("%d\n", pop());
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
void push(int x)
{
    queue[rear_idx++]=x;
}
int pop(void)
{
    if(front_idx==rear_idx){
        return -1;
    }
    return queue[front_idx++];
}
int size(void)
{
    return rear_idx-front_idx;
}
int empty(void)
{
    if(front_idx==rear_idx){
        return 1;
    }
    else{
        return 0;
    }
}
int front(void)
{
    if(front_idx==rear_idx){
        return -1;
    }
    else{
        return queue[front_idx];
    }
}
int back(void)
{
    if(front_idx==rear_idx){
        return -1;
    }
    return queue[rear_idx-1];
}