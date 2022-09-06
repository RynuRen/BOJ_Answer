#include <stdio.h>

long long ks[10000];
int k, n;

long long binary_search(long long, long long);

int main(void)
{
    long long max=0;    //k개의 랜선 중 최대값
    scanf("%d %d", &k, &n);
    for(int i=0;i<k;i++){
        scanf("%lld", &ks[i]);
        if(ks[i]>max){
            max=ks[i];
        }
    }
    printf("%lld\n", binary_search(1, max));
    return 0;
}
long long binary_search(long long start, long long end)
{
    while(start<=end){
        int cnt=0;
        long long mid=(start+end)/2;
        //랜선의 길이가 int형에 꽉차므로 연산중에 overflow 가능 -> long long 형으로
        for(int i=0;i<=k;i++){
            //주어진 k들이 몇개의 mid가 될지 cnt
            cnt+=ks[i]/mid;
        }
        if(cnt>=n){
            //mid보다 더 길게 잘라도 n개를 만들 수 있다
            start=mid+1;
        }
        else{
            //mid보다 짧게 잘라야 n개를 만들 수 있다
            end=mid-1;
        }
    }
    return end;
}