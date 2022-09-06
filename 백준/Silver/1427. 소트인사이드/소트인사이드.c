#include <stdio.h>
#include <string.h>    //strlen함수
void insertion_sort(char*, int);
int main(void)
{
    char a[11]={0,};    //주어지는 수 N은 최대 10자리
    scanf("%s", a);
    
    insertion_sort(a, strlen(a));
    
    printf("%s\n", a);
    return 0;
}
/*내림차순 삽입정렬*/
void insertion_sort(char a[], int n)    
{
    int i, j, key;
    for(i=1;i<n;i++)    //첫번째 요소는 정렬된 것으로 생각하므로 인덱스 1부터
    {
        key=a[i];                          //삽입될 요소를 아스키 코드로 변수에 복사
        for(j=i-1;j>=0&&a[j]<key;j--)      //정렬된 i-1부터 역순으로 삽입할 위치 조사
            a[j+1]=a[j];                   //삽입될 요소가 더 크면 한 요소씩 오른쪽으로 밀어내기
        a[j+1]=key;                        //요소를 위치에 삽입
    }
}