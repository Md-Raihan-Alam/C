//https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/F
#include<stdio.h>
#include<math.h>
int main(void)
{
    long long int n;
    scanf("%lld",&n);
    long long int arr[n];
    for(long long int k=0;k<n;k++) scanf("%lld",&arr[k]);
    long long int i=1;
    long long int j=n-1;
    long long int start=0;
    // long long int limit=n%2==0?ceil(n/2):ceil(n/2)+1;
    printf("%lld",arr[0]);
    start++;
    while(1){
        if(start==n) break;
        printf(" %lld",arr[j]);
        start++;
        if(start==n) break;
        printf(" %lld",arr[i]);
        i++;
        j--;
        start++;
    }
    return 0;
}