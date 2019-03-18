/*
 *      Exercise 3.4 from Kochan's "Programming in C"
 *
 *      Write a program that subtracts 15 from 87 and dislays result.
 */

#include <stdio.h>

int main (void)
{
        int x, y, sum;
        x = 15;
        y = 87;
        sum = y - x;

        printf ("%i from %i equals: %i\n", x, y, sum);

        return 0;
}
