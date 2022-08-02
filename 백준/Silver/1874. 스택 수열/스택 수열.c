#include <stdio.h>
#include <stdlib.h>     //malloc, exit, free 함수

int stack[100000];
int top;

void push(int);
int pop(void);
int check(int*, int*, int);

int main(void)
{
    int *num , *fn;
    int n, fn_len;
    scanf("%d", &n);
    num=(int*)malloc(n*sizeof(int));
    fn=(int*)malloc(2*n*sizeof(int));//연산자 저장(모든 숫자에 +-하므로 2배)
    if(num==NULL || fn==NULL){
        puts("Alloc Memory Error!!");
        exit(1);
    }
    for(int i=0;i<n;i++){
        scanf("%d", &num[i]);
    }
    fn_len=check(num, fn, n);
    if(fn_len){
        for(int i=0;i<fn_len;i++){
            if(fn[i]==1){
                printf("+\n");
            }
            else{
                printf("-\n");
            }
        }
    }
    else{
        printf("NO\n");
    }
    free(num);
    free(fn);
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
int check(int* num, int* fn, int n)
{
    int k=0;
    for(int i=0,j=1;i<n;i++){
        //현재숫자(j)가 수열 요소보다 작으면 계속 스택에 넣어둠
        while(num[i]>j){
            push(j++);
            fn[k++]=1;
        }
        //현재숫자가 수열 요소와 같으면 스택에 넣었다 뺌
        if(num[i]==j){
            push(j++);
            fn[k++]=1;
            pop();
            fn[k++]=0;
        }
        //수열 요소가 스택의 나올 값과 같으면 스택에서 뺌
        else if(num[i]==stack[top-1]){
            pop();
            fn[k++]=0;
        }
        //현재숫자가 수열 요소보다 크고 스택의 나올 값과 다를 때
        else{
            return 0;
        }
    }
    return k;   //k는 fn배열의 길이
}