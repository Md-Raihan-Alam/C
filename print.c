//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/B
#include<stdio.h>
void print(int n)
{
    int i=1;
    printf("%d",i);
    for(i=2;i<=n;i++) printf(" %d",i);
}
int main(void)
{
    int num;
    scanf("%d",&num);
    print(num);
    printf("\n");
    return 0;
}
