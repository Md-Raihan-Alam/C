//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L
#include<stdio.h>
#include<string.h>
int main(void)
{
    char firstPersonFirstName[100];
    char firstPersonSecondName[100];
    char secondPersonFirstName[100];
    char secondPersonSecondName[100];
    int brothersBool=1;
    int i;
    scanf("%s %s",&firstPersonFirstName,&firstPersonSecondName);
    scanf("%s %s",&secondPersonFirstName,&secondPersonSecondName);
    for(i=0;i<strlen(firstPersonSecondName);i++){
        if(firstPersonSecondName[i]!=secondPersonSecondName[i]) brothersBool=0;
    }
    brothersBool==1? printf("ARE Brothers\n"):printf("NOT\n");
    return 0;
}