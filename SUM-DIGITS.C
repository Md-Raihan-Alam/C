//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K
#include<stdio.h>
int main(void)
{
    long long i,n,a[1000010],sum=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf("%1lld",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    printf("%lld\n",sum);
    return 0;
}