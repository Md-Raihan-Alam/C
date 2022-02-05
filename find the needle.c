/*****
Can you find the needle in the haystack?

Write a function findNeedle() that takes an array full of junk but containing one "needle"

After your function finds the needle it should return a message (as a string) that says:

"found the needle at position " plus the index it found the needle, so:

find_needle(['hay', 'junk', 'hay', 'hay', 'moreJunk', 'needle', 'randomJunk'])
should return "found the needle at position 5"
*****/
#include<stddef.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
char *find_needle(const char **haystack, size_t count)
  {
        int size=count;
    char word[]="needle";
    char expected[]="found the needle at position ";
    int index;
    char strIndex[20];
    char *finalAnswer=(char *) calloc(29,sizeof(char));
    for(int i=0;i<size;i++)
    {
        if(strcmp(word,haystack[i])==0) index=i;
    }
    snprintf(strIndex, 20, "%d", index);
    unsigned int i=0;
    while(i<strlen(expected)){
        finalAnswer[i]=expected[i];
        i++;
    }
    strcat(finalAnswer,strIndex);
    return finalAnswer;
}
int main()
{
   int size=44;
   char *arrOfJunk[44]={"1","2","3","4","5","6","7","8","8","7","5","4","3","4","5","6","67","5","5","3","3","4","2","34",
       "234","23","4","234","324","324","needle","1","2","3","4","5","5","6","5","4","32","3","45","54"};
   printf("%s",find_needle(&arrOfJunk,size));
   return 0;
}


/***
Another solution
#include <stdio.h>

char *find_needle(const char **haystack, size_t count)
{
  for(int i=0; i<count;++i)
  {
    if(!strcmp(haystack[i], "needle")) // strcmp will return 0 if true, so we need '!' to it to work
    {
      char* buff;
      asprintf(&buff, "found the needle at position %d", i);
      return buff;
    }
  }
}
***/
