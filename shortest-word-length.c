/**
Simple, given a string of words, return the length of the shortest word(s).

String will never be empty and you do not need to account for different data types.
**/
#include <stdio.h>
#include <sys/types.h>
#include <string.h>
#include <ctype.h>
ssize_t find_short(const char *s)
{
    int lengthOfSmallestWord = strlen(s);
    int lengthOfStr = 0;
    unsigned int i;
    for (i = 0; i <= strlen(s); i++)
    {
        if (isspace(s[i]))
        {
            if (lengthOfStr < lengthOfSmallestWord)
            {
                lengthOfSmallestWord = lengthOfStr;
            }
            lengthOfStr = 0;
        }
        else if (i == strlen(s))
        {
            if (lengthOfStr < lengthOfSmallestWord)
            {
                lengthOfSmallestWord = lengthOfStr;
            }
        }
        else
        {
            lengthOfStr++;
        }
    }
    printf("%d\n", lengthOfSmallestWord);
    return lengthOfSmallestWord;
}
int main(void)
{
    find_short("Let's travel abroad shall we");
    return 0;
}
