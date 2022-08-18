#include <stdio.h>
#include <string.h>     //strlen 함수
#define MAX(a, b) ((a)>(b)?(a):(b))

char str1[1001];
char str2[1001];
int dp[1001][1001];

int LCS(int, int);

int main(void)
{
    int n;
    scanf("%d", &n);
    scanf("%s %s", str1, str2);
    printf("%d\n", LCS(strlen(str1), strlen(str2)));
    return 0;
}
int LCS(int len1, int len2)
{
    //dp[i][j]: str1의 (i-1)항까지의 문자열과 str2의 (j-1)항까지의 문자열의
    //LCS(Longest Common Subsequence)의 길이
    //점화식: str1[i-1]과 str2[j-1] 같을 때 dp[i][j]=dp[i-1][j-1]
    //      그 외 dp[i][j]=max(dp[i-1][j], dp[i][j-1])
    for(int i=1;i<=len1;i++){
        for(int j=1;j<=len2;j++){
            if(str1[i-1]==str2[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=MAX(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    return dp[len1][len2];
}