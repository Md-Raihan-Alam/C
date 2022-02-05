/***
Build a function that returns an array of integers from n to 1 where n>0.

Example : n=5 --> [5,4,3,2,1]
***/
/* Note: allocate memory yourself */
/* return NULL in case num == 0 */

#include <stdlib.h>
#include<stdio.h>
unsigned short *reverse_seq(unsigned short num)
{
    if(num==0) return NULL;
    int size=num+1;
    unsigned short* numbers=malloc(sizeof(int)*size);
    for(int i=0;i<num;i++){
        numbers[i]=num-i;
    }
    return numbers;
}
int main(void)
{
    int num=5;
    reverse_seq(0);
    return 0;
}
