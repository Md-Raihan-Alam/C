//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T
#include<stdio.h>
int main(void)
{
    int numOne,numTwo,numThree,tempNum;
    int i;
    int firstNum,secondNum,ThirdNum;
    scanf("%d %d %d",&numOne,&numTwo,&numThree);
    firstNum=numOne;
    secondNum=numTwo;
    ThirdNum=numThree;
    for(i=0;i<3;i++){
        if(numOne<=numThree && numOne<=numTwo){
            if(numTwo>numThree){
                tempNum=numTwo;
                numTwo=numThree;
                numThree=tempNum;
            }
        }else{
            if(numTwo<=numThree && numTwo<=numOne){
                tempNum=numTwo;
                numTwo=numOne;
                numOne=tempNum;
            }else{
                tempNum=numThree;
                numThree=numOne;
                numOne=tempNum;
            }
        }
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n",numOne,numTwo,numThree,firstNum,secondNum,ThirdNum);
    return 0;
}