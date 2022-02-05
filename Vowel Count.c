/***
Return the number (count) of vowels in the given string.

We will consider a, e, i, o, u as vowels for this Kata (but not y).

The input string will only consist of lower case letters and/or spaces.
***/
#include <stddef.h>
#include<stdio.h>
#include<string.h>
size_t get_count(const char *s)
{
    int vowelCount=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='a') vowelCount++;
        if(s[i]=='e') vowelCount++;
        if(s[i]=='i') vowelCount++;
        if(s[i]=='o') vowelCount++;
        if(s[i]=='u') vowelCount++;
    }
    return vowelCount;
}
int main()
{
    get_count("hello world");
    return 0;
}
