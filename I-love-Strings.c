//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K
#include<stdio.h>
#include<string.h>
int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char str1[51],str2[51];
        scanf("%s %s",&str1,&str2);
        int firstStringLength=strlen(str1);
        int secondStringLength=strlen(str2);
        int j=0;
        int k=0;
        while(1){
            if(j>=firstStringLength && k>=secondStringLength) break;
            if(j<firstStringLength){
                printf("%c",str1[j]);
                j++;
            }
            if(k<secondStringLength){
                printf("%c",str2[k]);
                k++;
            }
        }
        printf("\n");
    }
    return 0;
}