//https://codeforces.com/problemset/problem/451/A
#include<stdio.h>
int main(void)
{
    int m,n,times=1,count=0;
    scanf("%d %d",&m,&n);
    while(1){
        if(n-times==0) break;
        if(m-times==0) break;
        times++;
        count++;
    }
    if(count%2==0) printf("Akshat\n");
    else printf("Malvika\n");
    return 0;
}