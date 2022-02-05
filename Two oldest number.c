/********
The two oldest ages function/method needs to be completed. It should take an array of numbers as its argument and return the two highest numbers within the array. The returned value should be an array in the format [second oldest age, oldest age].

The order of the numbers passed in could be any order. The array will always include at least 2 items. If there are two or more oldest age, then return both of them in array format.

For example:

two_oldest_ages( 4, {1, 2, 10, 8} ) // should return {8, 10}
********/
#include <stdlib.h>
#include<stdio.h>
#include<mem.h>
int *two_oldest_ages(size_t n, const int ages[n]) {
    int size=n;
    int highestAge=0;
    int secondHighestAge=0;
    int count=0;
    int* result=malloc(sizeof(int)*size);
    for(int i=0;i<size;i++){
        if(ages[i]>highestAge)
        {
            highestAge=ages[i];
            result[1]=highestAge;
        }
    }
    for(int i=0;i<size;i++){
        if(ages[i]>secondHighestAge && ages[i]!=highestAge){
                secondHighestAge=ages[i];
                result[0]=secondHighestAge;
        }
    }
    for(int i=0;i<size;i++){
      if(ages[i]==highestAge){
        count++;
        if(count>1){
          result[0]=highestAge;
        }
      }
    }
    return result;
}
int main()
{
    int size=6;
    int ages[6]={1, 5, 87, 45, 8, 8};
    two_oldest_ages( 6, ages);
    return 0;
}
