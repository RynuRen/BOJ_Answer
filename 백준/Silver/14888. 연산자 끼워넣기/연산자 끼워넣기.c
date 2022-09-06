#include <stdio.h>

int n, max=-1000000000, min=1000000000;
int arr[11];    //입력받은 숫자배열
int fn[10];     //입력받은 연산자 정리한 배열(1:+, 2:-, 3:*, 4:/)
int fn_flag[10];//연산자 중복 체크 배열
int rst[10];    //중간결과 저장 배열(재귀 복귀시 사용)
void fnc(int);
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
    fnc(0);
    printf("%d\n%d\n", max, min);
    return (0);
}
void fnc(int idx)
{
    if(idx==0){
        rst[idx]=arr[idx];
        fnc(idx+1);
        return;
    }
    if(idx==n){ //연산자를 모두 나열했다면 최대, 최소를 비교 기록
        if(rst[n-1]>max)
            max=rst[n-1];
        if(rst[n-1]<min)
            min=rst[n-1];
        return;
    }
    for(int i=0;i<n-1;i++){
        if(fn_flag[i]==0){  //연산자 중복사용 체크
            switch(fn[i]){
                case 1:
                    rst[idx]=rst[idx-1]+arr[idx];
                    fn_flag[i]=1;
                    break;
                case 2:
                    rst[idx]=rst[idx-1]-arr[idx];
                    fn_flag[i]=1;
                    break;
                case 3:
                    rst[idx]=rst[idx-1]*arr[idx];
                    fn_flag[i]=1;
                    break;
                case 4:
                    if(rst<0){
                        rst[idx-1]*=-1;
                        rst[idx]=rst[idx-1]/arr[idx];
                        rst[idx]*=-1;
                    }
                    else
                        rst[idx]=rst[idx-1]/arr[idx];
                    fn_flag[i]=1;
                    break;
            }
            fnc(idx+1);
            fn_flag[i]=0;
        }
    }
}