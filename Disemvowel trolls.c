/**
Trolls are attacking your comment section!

A common way to deal with this situation is to remove all of the vowels from the trolls' comments, neutralizing the threat.

Your task is to write a function that takes a string and return a new string with all vowels removed.

For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".

Note: for this kata y isn't considered a vowel.
**/
//solution must allocate all required memory
//and return a free-able buffer to the caller.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *disemvowel(const char *str)
{
  char buf[300];
  unsigned long i,j=0;
  for(i=0;i<strlen(str);i++)
  {
   if(*(str+i)=='a' || *(str+i)=='A' || *(str+i)=='e' || *(str+i)=='E' || *(str+i)=='i' || *(str+i)=='I' || *(str+i)=='o' || *(str+i)=='O' || *(str+i)=='u' || *(str+i)=='U') continue;
   else{
        buf[j]=str[i];
        j++;
   }
  }
  buf[j]=0;
  char* disemvoweStr = malloc(j + 1);
  strcpy(disemvoweStr,buf);
  return disemvoweStr;
}
int main()
{
    disemvowel("fyUGnNUywjAvBSeybGtXlMkskKlbDgyJVJOmVvBAkbhpsDLjoFVXZtKcrBslluOxUUKEOrjRyDeSghTzFRHkfYLvelgvGSzeoWFXunaHfDGTaqOBYLIGqjYznZrTAXBrJc");
    return 0;
}
