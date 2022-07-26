#include <stdio.h>

int que[500000];
int main(void)
{
    int n;
    int idx=0, end;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        que[i]=i+1;
    }
    end=n-1;    //큐의 마지막 인덱스
    
    while(1) {
        //n으로 나눈 나머지로 배열을 n개 내에서 원형으로 사용
        idx=(idx+1)%n;      //카드를 버리고 다음 카드 인덱스로
        if(idx==end) {
            break;          //카드가 한장 남았는지 체크
        }
        end=(end+1)%n;      //카드를 놓을 큐(원형 순서상 마지막)를 선택
        que[end]=que[idx];  //카드 이동
        
        idx=(idx+1)%n;      //다음 카드 인덱스로
        if(idx==end) {
            break;          //카드가 한장 남았는지 체크
        }
    }
    printf("%d\n", que[end]);
    return 0;
}