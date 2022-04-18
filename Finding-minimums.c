//https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C
#include<stdio.h>
int main(void)
{
    int n,limit;
    scanf("%d %d",&n,&limit);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int digit=1,min=arr[0];
    for(int j=0;j<n;j++){
        if(digit==limit+1){
            printf("%d ",min);
            min=arr[j];
            digit=1;
        }
        if(arr[j]<min){
            min=arr[j];
        }
        digit++;
    }
    printf("%d ",min);
    return 0;
}