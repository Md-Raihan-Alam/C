// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F
#include<stdio.h>
int main(void)
{
    long long int firstNumber;
    long long int secondNumber;
    long long int lastDigitOfF;
    long long int lastDigitOfS;
    long long int total;
    scanf("%lld %lld",&firstNumber,&secondNumber);
    lastDigitOfF=firstNumber%10;
    lastDigitOfS=secondNumber%10;
    total=lastDigitOfF+lastDigitOfS;
    printf("%lld\n",total);
    return 0;
}