//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/A
#include<stdio.h>
#include<string.h>
int main(void)
{
    char s[2100],s2[1000];
    scanf("%s",&s);
    scanf("%s",&s2);
    printf("%d %d\n",strlen(s),strlen(s2));
    strcat(s," ");
    strcat(s,s2);
    printf("%s\n",s);
    return 0;
}