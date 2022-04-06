//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
#include<stdio.h>
int main(void)
{
    int n;
    long long int arr[100000];
    scanf("%d",&n);
    int i;
    int palindrome=1;
    for(i=0;i<n;i++) scanf("%lld",&arr[i]);
    for(i=0;i<n;i++)
        if(arr[i]!=arr[n-(i+1)]) {
                    palindrome=0;
                    break;
        }
    palindrome==1? printf("YES\n"):printf("NO\n");
    return 0;
}
