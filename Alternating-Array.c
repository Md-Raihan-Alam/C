//https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/E
#include<stdio.h>
int main(void)
{
    long long int n;
    scanf("%lld",&n);
    long long int arr[n];
    for(long long int i=0;i<n;i++) scanf("%lld",&arr[i]);
    long long int totalWork=0;
    if(arr[0]<0){
        // printf("Condition One\n");
        for(long long int j=1;j<n;j++){
            if(j%2!=0) {
                if(arr[j]<0) totalWork++;
            }
        }
    }else{
        // printf("Condition two\n");
        for(long long int k=1;k<n;k++){
            if(k%2!=0) {
                if(arr[k]>0) totalWork++;
            }
        }
    }
    printf("%lld\n",totalWork);
    return 0; 
}