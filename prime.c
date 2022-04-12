// Find out whether a given number is prime or not
#include<stdio.h>
int main(void)
{
    int num=2,i;
    int isPrime=1;
    for(i=2;i*i<=num;i++){
        if(num%i==0){
            isPrime=0;
        }
    }
    if(num<2) printf("The number %d is not prime",num);
    else if(isPrime) printf("The number %d is prime\n",num);
    else printf("The number %d is not prime",num);
    return 0;
}