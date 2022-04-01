//https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H
#include<stdio.h>
#include<math.h>
int main(void)
{
    double numOne,numTwo,numThree;
    double  res,holdCeil;
    scanf("%lf %lf %lf",&numOne,&numTwo,&numThree);
    res=(numOne*numTwo)/numThree;
    holdCeil=ceil(res);
    if(res!=holdCeil){
        printf("double\n");
    }else{
        if(res>(-2147483648) && res<2147483648) printf("int\n");
        else printf("long long\n");
    }
    return 0;
}