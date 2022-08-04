#include <stdio.h>

int tree[1000000];
int n, m;

int binary_search(int, int);

int main(void)
{
    int max=0;  //가장 높은 나무
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++){
        scanf("%d", &tree[i]);
        if(tree[i]>max){
            max=tree[i];
        }
    }
    printf("%d\n", binary_search(1, max));
    return 0;
}
int binary_search(int start, int end)
{
    while(start<=end){
        long long sum=-0;       //sum은 int범위를 넘을 수 있음
        int mid=(start+end)/2;  //나무 높이 둘을 합해도 int의 범위 내
        for(int i=0;i<n;i++){
            if(tree[i]>mid){
                sum+=tree[i]-mid;
            }
        }
        if(sum>=m){
            //mid보다 더 높이 잘라도 m을 만들 수 있음
            start=mid+1;
        }
        else{
            //mid보다 더 낮게 잘라야 m을 만들 수 있음
            end=mid-1;
        }
    }
    return end;
}