#include <stdio.h>
int main(void)
{
    char ch[101]={0,};      //전역변수는 따로 초기화 하지 않으면 0으로 초기화 되지만 지역변수는 쓰레기값을 가진다
    int i, cnt=0;           //과거에는 {0, }라고 적었어야 했지만 이제는 아래와 같이 {0}만 적어도 배열의 모든 항목이 0으로 초기화
    scanf("%s", ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>='a'&&ch[i]<='z'){    //알파벳 일 경우
            if(i>0&&ch[i]=='z'&&ch[i-1]=='d'&&ch[i+1]=='=')    //dz= 일 경우 d를 cnt 안함
                continue;
            else if(ch[i]=='j'&&(ch[i-1]=='n'||ch[i-1]=='l'))  //nj,lj 일 경우 j를 cnt 안함
                continue;
            else
                cnt++;
        }
    }
    printf("%d \n", cnt);
    return 0;
}
