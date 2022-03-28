//https://codeforces.com/problemset/problem/58/A
#include<stdio.h>
#include<string.h>
// #include<conio.h>
int main(void)
{
    char ch[100];
    scanf("%s",&ch);
    char helloWorld[5]={'h','e','l','l','o'};
    int i=0;
    int j=0;
    while(i<strlen(ch)){
        if(ch[i]==helloWorld[j]){
            j++;
            if(j==5) break;
        }
        i++;
    }
    if(j==5) printf("YES");
    else printf("NO");
    // getch();
    return 0;
}
