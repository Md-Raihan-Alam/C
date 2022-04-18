//https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D
#include<stdio.h>
int main(void)
{
    long long int n,i,j;
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        long long int numOne,numTwo,sum,newNumOne,newNumTwo;
        scanf("%lld %lld",&numOne,&numTwo);
        newNumOne=numOne<numTwo?numOne:numTwo;
        newNumTwo=numTwo>numOne?numTwo:numOne;
        sum=(((newNumTwo)*(newNumTwo+1))/2)-(((newNumOne-1)*(newNumOne))/2);
        printf("%lld\n",sum);
    }
    return 0;
}