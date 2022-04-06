#include<stdio.h>
int main(void)
{
    int count;
    long long int arr[100000];
    long long int revarr[100000];
    int i;
    scanf("%d",&count);
    for(i=0;i<count;i++) scanf("%lld",&arr[i]);
    for(i=0;i<count;i++) revarr[count-(i+1)]=arr[i];
    for(i=0;i<count;i++) printf("%lld ",revarr[i]);
    return 0;
}

