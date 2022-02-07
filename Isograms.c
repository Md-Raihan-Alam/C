/*
 An isogram is a word that has no repeating letters, consecutive or non-consecutive. Implement a function that determines whether a string that contains only letters is an isogram. Assume the empty string is an isogram. Ignore letter case.

Example: (Input --> Output)

"Dermatoglyphics" --> true
"aba" --> false
"moOse" --> false (ignore letter case)
 */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
bool IsIsogram(const char *string)
{
    int i, j;
    int size = strlen(string);
    for (i = 0; i < size - 1; i++)
    {
        for (j = i + 1; j <= size - 1; j++)
        {
            if (toupper(string[i]) == toupper(string[j]))
            {
                printf("It is not isograms");
                return 0;
            }
        }
    }
    printf("It is isograms");
    return 1;
}
int main()
{
    IsIsogram("aa");
    return 0;
}