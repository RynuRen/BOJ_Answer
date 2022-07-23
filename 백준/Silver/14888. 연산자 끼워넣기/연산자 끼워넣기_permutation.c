#include <stdio.h>

int n, max=-1000000000, min=1000000000;
int arr[11];    //입력받은 숫자배열
int fn[10];     //입력받은 연산자 정리한 배열(1:+, 2:-, 3:*, 4:/)
void fnc(void);
void swap(int, int);
void permutation(int);
int main(void)
{
    int i, j=0;
    int fn_input[4];
    scanf("%d", &n);
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    for(i=0;i<4;i++){
        scanf("%d", &fn_input[i]);
        //연산자를 fn배열에 펼침(1:+, 2:-, 3:*, 4:/)
        while(fn_input[i]!=0){
            fn[j++]=i+1;
            fn_input[i]--;
        }
    }
    permutation(0);
    printf("%d\n%d\n", max, min);
    return (0);
}
void fnc(void)
{
    int rst=arr[0];
    for(int i=0;i<n-1;i++)
        switch(fn[i]){
            case 1:
                rst+=arr[i+1];
                break;
            case 2:
                rst-=arr[i+1];
                break;
            case 3:
                rst*=arr[i+1];
                break;
            case 4:
                rst/=arr[i+1];
                break;
        }
    if(rst>max)
        max=rst;
    if(rst<min)
        min=rst;
}
void swap(int a, int b)
{
    int tmp=fn[a];
    fn[a]=fn[b];
    fn[b]=tmp;
}
//같은 것이 있는 순열
void permutation(int st)
{
    if(st==n-2) //배열이 완성되면 계산
        fnc();
    for(int i=st; i<n-1;i++){
        if(i!=st && fn[i]==fn[st])  //swap 대상이 같은 값일 때
            continue;
        swap(i, st);
        permutation(st+1);
        swap(i, st);    //재귀에서 돌아올 경우 기존상태로 복구
    }
}
