//https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A
#include<stdio.h>
int main(void)
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    if(a-b>=0) printf("%lld\n",a-b);
    else printf("0\n");
    return 0;
}