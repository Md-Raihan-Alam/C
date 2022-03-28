//https://codeforces.com/problemset/problem/118/A
#include<stdio.h>
#include<string.h>
#include<ctype.h>
// #include<conio.h>
int main(void)
{
    int i;
    char ch[1000];
    char strTask[1000];
    int strTaskIndex=0;
    scanf("%s",&ch);
    // printf("%d",strlen(ch));
    for(i=0;i<strlen(ch);i++){
        if(toupper(ch[i])!='A'&&toupper(ch[i])!='E'&&toupper(ch[i])!='I'&&toupper(ch[i])!='O'&&toupper(ch[i])!='U'&&toupper(ch[i])!='Y'){
            strTask[strTaskIndex]='.';
            strTaskIndex++;
            strTask[strTaskIndex]=tolower(ch[i]);
            strTaskIndex++;
        }
    }
    strTask[strTaskIndex]='\0';
    printf("%s",strTask);
    fflush(stdout);
    // getch();
    return 0;
}