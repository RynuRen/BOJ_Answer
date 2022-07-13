#include <stdio.h>
#include <string.h>    //strlen, strstr, strncpy 함수
int main(void)  //strstr(대상문자열,찾을문자열):
{               //대상에 찾을 문자열이 존재하면 해당 문자열 포인터, 없으면 NULL
	int cnt = 0;
	char ch[1001];
	char tmp[1001];
	scanf("%s", ch);
	int len = strlen(ch);
	
	for (int i=1;i<len;i++)         //i: 부분문자열 길이
		for (int j=0;j<=len-i;j++){ //j: 부분문자열 시작idx
			cnt++;
			strncpy(tmp, ch+j, i);  //ch의 j인덱스부터 길이 i만큼 tmp에 복사
			tmp[i] = 0; //strncpy끝에 널문자 붙이기
			if (strstr(ch+j+1, tmp))  //j+1인덱스 이후에 tmp 문자열이 발견되면
				cnt--;                //중복 카운트이므로 제외
		}
	printf("%d\n", cnt+1);  //자기자신을 더함
	return 0;
}
