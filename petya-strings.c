//https://codeforces.com/problemset/problem/112/A
#include<stdio.h>
#include<string.h>
//#include<conio.h>
#include<ctype.h>
int main(void)
{
    char str[100];
    char str2[100];
    int i;
    scanf("%s",&str);
    scanf("%s",&str2);
    for(i=0;i<strlen(str);i++) str[i]=toupper(str[i]);
    for(i=0;i<strlen(str2);i++) str2[i]=toupper(str2[i]);
    //printf("%s %s",str,str2);
    if(strcmp(str,str2)<0) printf("-1");
    else if(strcmp(str,str2)==0) printf("0");
    else printf("1");
    //getch();
    return 0;
}