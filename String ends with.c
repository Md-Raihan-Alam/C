/*
Complete the solution so that it returns true if the first argument(string) passed in ends with the 2nd argument (also a string).

Examples:

solution('abc', 'bc') // returns true
solution('abc', 'd') // returns false
*/
#include <stdbool.h>
#include<string.h>
#include<stdio.h>
bool solution(const char *string, const char *ending)
{
    //printf("Hello %s",string);
    //printf("\nHello %s",ending);
    int strLen=strlen(string);
    int endLen=strlen(ending);
    if(endLen>strLen) return false;
    for(int i=1;i<=endLen;i++){
        //printf("\n=%c =%c",string[strLen-i],ending[endLen-i]);
        if(string[strLen-i]!=ending[endLen-i])
        {
            return false;
        }

    }
    return true;
}
/*
#include <stdbool.h>
#include <string.h>

bool solution(const char *string, const char *ending)
{
    int len = strlen(string) - strlen(ending);
    return len < 0 ?false :strcmp(string + len, ending) == 0;
}
*/
int main()
{
    char str[]="abc";
    char str2[]="d";
    printf("\n%d",solution(str,str2));
    return 0;
}
