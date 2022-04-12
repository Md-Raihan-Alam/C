//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W
#include<stdio.h>
#include<math.h>
int main(void)
{
    int n,i,j,k,l=1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=i;j<n-1;j++) printf(" ");
        for(k=0;k<l;k++) printf("*");
        l+=2;
        printf("\n");
    }
    l-=2;
    for(i=n;i>0;i--){
        for(j=0;j<=n-(i+1);j++) printf(" ");
        for(k=l;k>0;k--) printf("*");
        l-=2;
        printf("\n");
    }
    return 0;
}