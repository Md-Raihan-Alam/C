//https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I
#include<stdio.h>
#include<math.h>
int main(void)
{
    int number;
    int firstNumber,secondNumber;
    scanf("%d",&number);
    secondNumber=number%10;
    firstNumber=number;
    while (firstNumber>=10)
    {
        firstNumber/=10;
    }
    if(secondNumber==0) printf("YES\n");
    else if(firstNumber%secondNumber==0) printf("YES\n");
    else if(secondNumber%firstNumber==0) printf("YES\n");
    else printf("NO\n");
    return 0;
}