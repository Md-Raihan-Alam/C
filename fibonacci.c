//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y
#include<stdio.h>
int main(void)
{
    int first=0,second=1,count=0,fibo,n;
    scanf("%d",&n);
    while(count<n){
        if(count<=1){
            fibo=count;
        }
        else{
            fibo=first+second;
            first=second;
            second=fibo;
        }
        printf("%d ",fibo);
        count++;
    }
    return 0;
}