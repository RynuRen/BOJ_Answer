#include <stdio.h>
#define MAX_QUEUE_SIZE 101

int queue[MAX_QUEUE_SIZE];  //원형큐
int front, rear;

void push(int);
int pop(void);
int max_prio(void);

int main(void)
{
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        int n, m;
        int max=0, cnt=0;
        scanf("%d %d", &n, &m);
        int target=m;
        for(int j=0;j<n;j++){
            int tmp;
            scanf("%d", &tmp);
            push(tmp);
        }
        while(1){
            max=max_prio(); //큐 내의 최대 중요도
            while(queue[front]<max){
                if(front==target){
                    target=rear;    //타겟 위치 재지정
                }
                push(pop());
            }
            if(queue[front]==max){
                cnt++;
                if(front==target){
                    break;
                }
                pop();
            }
        }
        printf("%d\n", cnt);
        front=0, rear=0;    //큐 초기화
    }
    return 0;
}
void push(int x)
{
    queue[rear]=x;
    rear=(rear+1)%MAX_QUEUE_SIZE;
}
int pop(void)
{
    int tmp=queue[front];
    front=(front+1)%MAX_QUEUE_SIZE;
    return tmp;
}
//큐 안에서 최대값 반환
int max_prio(void)
{
    int max=0, cnt=0;
    int idx=front;
    int que_len=(rear-front+MAX_QUEUE_SIZE)%MAX_QUEUE_SIZE; //현재 큐의 길이
    while(cnt!=que_len){
        if(queue[idx]>max){
            max=queue[idx];
        }
        idx=(idx+1)%MAX_QUEUE_SIZE;
        cnt++;
    }
    return max;
}