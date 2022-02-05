/*
Your task is to make a function that can take any non-negative integer as an argument and return it with its digits in descending order.
Essentially, rearrange the digits to create the highest possible number.

Examples:
Input: 42145 Output: 54421

Input: 145263 Output: 654321

Input: 123456789 Output: 987654321
*/
#include <inttypes.h>
#include <string.h>
#include<stdio.h>
uint64_t descendingOrder(uint64_t n)
{
  int digits[10];
  uint64_t result = 0;

  memset(digits, 0, sizeof(digits));

  while(n > 0) {
    digits[n%10]++;
    n /= 10;
  }

  for(int i = 9; i >= 0; i--) {
    while(digits[i] > 0) {
      result *= 10;
      result += i;
      digits[i]--;
    }
  }

  return result;
}

int main()
{
    printf("%d",descendingOrder(1273));
    return 0;
}
