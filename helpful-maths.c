//https://codeforces.com/problemset/problem/339/A
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
int cmpfunc(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}
int main(void)
{
    char ch[100];
    char result[100];
    int arrLength;
    int strLength;
    scanf("%s",&ch);
    strLength=strlen(ch)-1;
    arrLength=ceil(strlen(ch)/2)+1;
    int arr[arrLength];
    int i;
    int digits=0;
    for(i=0;i<arrLength;i++){
        arr[i]=ch[digits]-'0';
        digits=digits+2;
    }
    qsort(arr,arrLength,sizeof(int),cmpfunc);
    i=0;
    int ar=0;
    while(i<=strLength){
        if(i!=0 && i%2!=0) result[i]='+';
        else {
            result[i]=arr[ar]+'0';
            ar++;
        }
        i++;
    }
    result[i]='\0';
    puts(result);
    return 0;
}