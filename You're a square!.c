/**
A square of squares
You like building blocks. You especially like building blocks that are squares. And what you even like more, is to arrange them into a square of square building blocks!

However, sometimes, you can't arrange them into a square. Instead, you end up with an ordinary rectangle! Those blasted things! If you just had a way to know, whether you're currently working in vain… Wait! That's it! You just have to check if your number of building blocks is a perfect square.

Task
Given an integral number, determine if it's a square number:

In mathematics, a square number or perfect square is an integer that is the square of an integer; in other words, it is the product of some integer with itself.

The tests will always use some integral number, so don't worry about that in dynamic typed languages.

Examples
-1  =>  false
 0  =>  true
 3  =>  false
 4  =>  true
25  =>  true
26  =>  false
**/
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

bool is_square(int number)
{
    /* count number of digits */
    int c = 0; /* digit position */
    int n = number;

    while (n != 0)
    {
        n /= 10;
        c++;
    }

    int numberArray[c];

    c = 0;
    n = number;

    /* extract each digit */
    while (n != 0)
    {
        numberArray[c] = n % 10;
        n /= 10;
        c++;
    }
    if (numberArray[0])
        return 0;
}
int main()
{
    is_square(26);
    return 0;
}
