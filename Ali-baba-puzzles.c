// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D
#include<stdio.h>
int main(void)
{
    long long int a,b,c,d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    if(a+b-c==d) printf("YES\n");
    else if(a-b+c==d) printf("YES\n");
    else if(a+b*c==d) printf("YES\n");
    else if(a*b+c==d) printf("YES\n");
    else if(a-b*c==d) printf("YES\n");
    else if(a*b-c==d) printf("YES\n");
    else printf("NO\n");
    return 0;
}