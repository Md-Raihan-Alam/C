//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M
#include<stdio.h>
int main(void)
{
    int firstNumber,secondNumber,i,currentNumber,rem,luckyNumber=1,found=0;
    scanf("%d %d",&firstNumber,&secondNumber);
    for(i=firstNumber;i<=secondNumber;i++){
            currentNumber=i;
        while(currentNumber!=0){
            rem=currentNumber%10;
            if(rem!=7 && rem!=4) {
                    luckyNumber=0;
            }
            currentNumber/=10;
        };
        if(luckyNumber==1) {
                printf("%d ",i);
                found=1;
        }
        luckyNumber=1;
    }
    if(found==0) printf("-1");
    return 0;
}
