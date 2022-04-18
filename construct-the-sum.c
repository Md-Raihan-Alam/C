//https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/G
#include<stdio.h>
int main(void)
{
    int i,t,answer=0;
    long long int n,s,j,k;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%lld %lld",&n,&s);
        for(j=n;j>0;j--){
            for(k=j-1;k>0;k--){
                if(j+k==s) {
                    printf("%lld %lld ",j,k);
                    answer=1;
                }
            }
        }
        if(answer==0) printf("-1\n");
        else printf("\n");
    }
    return 0;
}
