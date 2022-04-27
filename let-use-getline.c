//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B
#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[10000];
    gets(str);
    int i;
    for(i=0;i<strlen(str);i++) {
        if(str[i]=='\\') break;
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}