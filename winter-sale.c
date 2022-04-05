//https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A
#include<stdio.h>
int main(void)
{
    float discountPercentage,discountPrice;
    float realPrice;
    scanf("%f %f",&discountPercentage,&discountPrice);
    realPrice=discountPrice/(1-(discountPercentage/100));
    printf("%.2f\n",realPrice);
    return 0;
}