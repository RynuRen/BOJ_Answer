#include <stdio.h>
//#include <stdlib.h>
int main_10989(void)
{
    int n, num;
    int cArray[10001]={0,};    //배열들의 데이터를 카운트할 배열
    /*int* a=(int*)calloc(10000000, sizeof(int));         //입력받은 값을 저장할 배열을 만들어 버리면 문제에서 제한한 메모리 8MB를 초과해 버린다
    if(a==NULL){                                          //배열을 저장하지 않고 바로 카운트만 해야함
        puts("Alloc Memory Error!!");
        exit(1);
    }*/
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &num);
        cArray[num]++;        //입력받은 숫자들을 바로 카운트해서 기록
    }
    for(int i=0;i<=10000;i++)
        for(int j=0;j<cArray[i];j++)    //중복 입력받은 숫자들을 기록
            printf("%d\n", i);
    //free(a);
    return 0;
}
