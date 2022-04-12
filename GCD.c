//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L
#include<stdio.h>
int main(void)
{
    int num1,num2,n1,n2,rem,gcd,lcm;
    scanf("%d%d",&num1,&num2);
    n1=num1;
    n2=num2;
    while(n2!=0){
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    // lcm=(num1*num2)/gcd;->for LCM
    printf("%d",gcd);
    return 0;
}