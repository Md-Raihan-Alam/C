//https://codeforces.com/problemset/problem/122/A
#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0 || n%474==0 || n%447==0 || n%477==0 || n%777==0 || n%444==0 || n%744==0) printf("YES"); 
    else printf("NO");
    return 0;
}
