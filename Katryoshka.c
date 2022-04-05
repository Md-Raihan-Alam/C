// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G
#include<stdio.h>
int main(void)
{
    long long int n,m,k;
    scanf("%lld %lld %lld",&n,&m,&k);
    long long int katryoshka=0;
    if(n==0) printf("0\n");
    else if(k==0) printf("0\n");
    else{
        for(;;){
            if(n<=0) break;
            if(k<=0) break;
            if(m>1) n--;
            else n/=2;
            k--;
            m--;
            katryoshka++;
        }
        printf("%lld\n",katryoshka);
    }
    return 0;
}