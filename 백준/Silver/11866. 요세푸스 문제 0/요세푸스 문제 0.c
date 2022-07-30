#include <stdio.h>
#define MAX_QUEUE_SIZE 1001

void push(int);
int pop(void);

int queue[MAX_QUEUE_SIZE];  //원형큐
int front, rear;

int main(void)
{
    int n, i, k;
    scanf("%d %d", &n, &k);
    for(i=0;i<n;i++){
        queue[i]=i+1;
    }
    rear=n;
    printf("<");
    while(1){
        for(i=0;i<k-1;i++){
            push(pop());   //k-1 번째까지 큐에 다시 넣음
        }
        printf("%d", pop());  //k 번째 제거 후 순열 출력
        if(front==rear){
            printf(">\n");
            break;
        }
        else{
            printf(", ");
        }
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