#include<stdio.h>
int main(void)
{
    long long int numOne,numTwo,numThree,min,max;
    scanf("%lld%lld%lld",&numOne,&numTwo,&numThree);
    if(numOne>=numTwo && numOne>=numThree) max=numOne;
    else if(numTwo>=numTwo && numTwo>=numThree) max=numTwo;
    else max=numThree;
    if(numOne<=numTwo && numOne<=numThree) min=numOne;
    else if(numTwo<=numTwo && numTwo<=numThree) min=numTwo;
    else min=numThree;
    printf("%lld %lld\n",min,max);
    return 0;
}