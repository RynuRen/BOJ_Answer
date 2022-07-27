#include <stdio.h>

char stack[50];
int top;

int ckVPS(char*);
void push(char);
char pop(void);
int ckEmpty(void);

int main(void)
{
    int t;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        char ps[51]={0,};
        scanf("%s", ps);
        if(ckVPS(ps)){  //VPS 체크 함수
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
int ckVPS(char* ps)
{
    int result=1;
    for(int i=0;ps[i];i++){
        if(ps[i]=='('){
            push(ps[i]);    //'('가 있다면 스택에 push
        }
        else{
            if(ckEmpty()){  //스택이 비었는데 ')'가 있다면
                result=0;   //VPS가 아님
                break;
            }
            else{           //스택의 '('를 pop
                pop();
            }
        }
    }
    if(!ckEmpty()){     //반복문 종료후 스택이 비어있지 않으면
        result=0;       //VPS가 아님
    }
    while(!ckEmpty()){  //다음 사용을 위해 스택을 비움
        pop();
    }
    return result;
}
void push(char a)
{   //스택에 push된 항목을 채우고 다음 인덱스를 나타냄
    stack[top++]=a;
}
char pop(void)
{   //인덱스를 줄이고 스택에 남은 최근 항목을 반환
    return stack[--top];
}
int ckEmpty(void)
{   //스택의 인덱스가 0인지?
    return top==0;
}
