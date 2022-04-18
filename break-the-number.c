//https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/F
#include<stdio.h>
int main(void)
{
    int n;
    long long int j;
    int count=0,maxCount=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lld",&j);
        for(;;){
            if(j%2!=0) break;
            if(j%2==0){
                count++;
                j/=2;
            }
        }
        if(count>maxCount) maxCount=count;
        count=0;
    }
    printf("%d",maxCount);
    return 0;
}