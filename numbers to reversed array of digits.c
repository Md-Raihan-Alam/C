/**
Convert number to reversed array of digits
Given a random non-negative number, you have to return the digits of this number within an array in reverse order.

Example:
348597 => [7,9,5,8,4,3]
0 => [0]
**/
#include <stddef.h>
#include <inttypes.h>

void digitize (uint64_t n, uint8_t digits[], size_t *length_out)
{
  size_t i = 0;

  do
  {
    digits[i++] = n % 10;
    n /= 10;
  }
  while (n);

  *length_out = i;
}
