/*****
Summation
Write a program that finds the summation of every number from 1 to num. The number will always be a positive integer greater than 0.

For example:

summation(2) -> 3
1 + 2

summation(8) -> 36
1 + 2 + 3 + 4 + 5 + 6 + 7 + 8
*****/
#include<stdio.h>
int summation(int num) {
  int total=0;
  for(int i=0;i<=num;i++){
    total+=i;
  }
  return total;
}
int main()
{
    printf("%d",summation(8));
    return 0;
}
