#include<stdio.h>
int main(void)
{
    long long int n;
    scanf("%lld",&n);
    long long int arr[100000];
    long long int num;
    int index;
    int i;
    int found=0;
    for(i=0;i<n;i++) scanf("%lld",&arr[i]);
    scanf("%lld",&num);
    for(i=0;i<n;i++){
        if(arr[i]==num){
            index=i;
            found=1;
            break;
        }
    }
    if(found==1) printf("%d ",index);
    else printf("-1");
    return 0;
}
