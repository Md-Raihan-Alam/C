#include<stdio.h>
int main()
{
    int i,num;
    int isPrime=1;
    scanf("%d",&num);
    for(i=2;i<num;i++){
        if(num%i==0) isPrime=0;
    }
    if(num<=0) printf("NO\n");
    else if(isPrime) printf("YES\n");
    else printf("NO\n");
    return 0;
}