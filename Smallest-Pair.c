//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
#include<stdio.h>
int main()
{
    int l,l2,n;
    int k;
    int arr[120];
    int i,j;
    int min,currentValue;
    scanf("%d",&n);
    for(l=0;l<n;l++){
        scanf("%d",&k);
        for(l2=0;l2<k;l2++) scanf("%d",&arr[l2]);
        min=arr[0]+arr[1]+2-1;
        for(i=1;i<k;i++){
            for(j=i+1;j<=k;j++){
                currentValue=arr[i-1]+arr[j-1]+j-i;
                if(currentValue<min) min=currentValue;
            }
        }
        printf("%d\n",min);
    }
    return 0;
}