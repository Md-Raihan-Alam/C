//https://codeforces.com/problemset/problem/339/A
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
int main(void)
{
    char ch[110];
    scanf("%s",&ch);
    int digit=0;
    int i;
    char *token=strtok(ch,"+");
    while(token!=NULL){
        token=strtok(NULL,"+");
        digit++;
    }
    char arr[digit];
    i=0;
    while(token!=NULL){
        arr[i]=(char)token;
        token=strtok(NULL,"+");
        i++;
    }
    for(i=0;i<digit;i++) printf("%c",arr[i]);
    getch();
    return 0;
}