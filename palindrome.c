//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I
#include<stdio.h>
int main()
{
    int n,reverse=0,rem,realNumber;
    scanf("%d",&n);
    realNumber=n;
    while(n!=0){
        rem=n%10;
        reverse=reverse*10+rem;
        n/=10;
    }
    if(realNumber==reverse) printf("%d\nYES\n",reverse);
    else printf("%d\nNO\n",reverse);
    return 0;
}
