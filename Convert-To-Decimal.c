//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X
#include<stdio.h>
#include<math.h>
int main(void)
{
    int i,n,num;
    int rem=0,place;
    int oneCount=0;
    int dec,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num);
        oneCount=0;
        while(num!=0){
            rem=num%2;
            if(rem==1){
                oneCount++;
            }
            num/=2;
        }
        rem=0;
        place=0;
        dec=0;
        for(j=1;j<=oneCount;j++){
            dec+=1*pow(2,place);
            place++;
        }
        printf("%d\n",dec);
    }
}