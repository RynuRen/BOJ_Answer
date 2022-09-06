#include <stdio.h>
#include <stdlib.h> //abs 함수

int n, min=8910;//팀 능력치 최대9000, 최소90
int s[21][21];
int check[21];  //팀원 중복 체크 배열
int team_start[10], team_link[10];
void calculate(void);
void combination(int, int);
int main(void)
{
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d", &s[i][j]);
    combination(0, 0);   //0번 사람부터, st멤버 시작idx
    printf("%d\n", min);
    return (0);
}
void calculate(void)
{
    int sum_start=0;
    int sum_link=0;
    for(int i=0;i<n/2;i++)
        for(int j=0;j<n/2;j++)
            if(i!=j){
                sum_start+=s[team_start[i]][team_start[j]];
                sum_link+=s[team_link[i]][team_link[j]];
            }
    if(min>abs(sum_start-sum_link))
        min=abs(sum_start-sum_link);
}
//n명을 n/2명과 n/2명 두 팀으로 나누는 조합
void combination(int a, int st_idx)
{
    if(team_start[0]!=0)    //st팀과 li팀의 조합이 반대되는 경우 제외
        return;
    if(st_idx>=n/2){   //st팀을 다 채우고 나머지를 li팀에 채움
        int li_idx=0;
        for(int i=0;i<n;i++)
            if(check[i]==0)
                team_link[li_idx++]=i;
        calculate();
        return;
    }
    for(int i=a;i<n;i++)
        if(check[i]==0)
            if(st_idx<n/2){
                team_start[st_idx]=i;
                check[i]=1;
                combination(i+1, st_idx+1);
                check[i]=0; //재귀 복귀시 상태 복구
            }
}