#include <stdio.h>
#include <stdlib.h>
void nselfnum(int*);
int main(void)
{
    int* nselnum=(int*)calloc(10001,sizeof(int));    //보통 스택영역의 메모리는 크기를 한정시키는 시스템이 많기에 배열의 크기가 클 경우
    if(nselnum==NULL){                               //전역변수로 지정하여 데이터영역에 남기거나 직접 힙영역에 할당해 줘야 한다.
        printf("Alloc Memory Error!");               //calloc 함수는 값을 0 으로 초기화 시킨다
        return -1;
    }
    nselfnum(nselnum);      //0부터 10000까지 모두 검사하여 1 표시를 남김
    for(int i=0;i<10000;i++)
        if(nselnum[i]!=1)
            printf("%d \n", i);     //1 표시가 안된 셀프넘버만 출력
    free(nselnum);          //할당한 메모리 해제
    return 0;
}
void nselfnum(int* n)       //셀프넘버가 아닌 숫자의 배열에 1 표시하는 함수
{
    int i, j;
    for(i=0;i<10000;i++)
    {
        if(i<10){           //한 자릿수일 때
            j=i+i;
            n[j]=1;
        }
        else if(i<100){     //두 자릿수일 때
            j=i+i/10+i%10;    //그 숫자와 각 자릿수들의 합은 생성자 i가 존재하기에 셀프넘버가 아니다
            n[j]=1;
        }
        else if(i<1000){    //세 자릿수일 때
            j=i+i/100+(i%100)/10+i%10;
            n[j]=1;
        }
        else if(i<10000){   //네 자릿수일 때
            j=i+i/1000+(i%1000)/100+(i%100)/10+i%10;
            if(j>10000)      //i는 10000보다 작지만 j는 10000보다 클 경우가 나오지만 문제의 조건에 의해 클 때는 넘김
                continue;
            n[j]=1;
        }
    }
}
