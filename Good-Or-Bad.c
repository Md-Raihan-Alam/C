//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/H
#include<stdio.h>
#include<string.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++){
        int badNumber=1;
        char str[100000];
        scanf("%s",&str);
        for(j=0;j<strlen(str)-2;j++){
            if(str[j]=='0' && str[j+1]=='1' && str[j+2]=='0'){
                printf("Good\n");
                badNumber=0;
                break;
            }else if(str[j]=='1' && str[j+1]=='0' && str[j+2]=='1'){
                printf("Good\n");
                badNumber=0;
                break;
            }
        }
        if(badNumber==1) printf("Bad\n");
    }
    return 0;
}