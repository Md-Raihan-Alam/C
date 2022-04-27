//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(void)
{
    char str[100000];
    gets(str);
    int i;
    for(i=0;i<strlen(str);i++){
        if(isupper(str[i])) putchar(tolower(str[i]));
        else if(str[i]==',') printf(" ");
        else putchar(toupper(str[i]));
    }
    printf("\n");
    return 0;
}