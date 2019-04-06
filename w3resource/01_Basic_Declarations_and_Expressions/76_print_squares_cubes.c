/*
 *      Exercise 76: Write a C programming to calculate and print
 *      the squares and cubes of the numbers 0 to 20.
 *
 *      Uses tabs to display them in a table of values.
 *
 */

#include <stdio.h>

int main (void)
{
        for ( int i = 0; i <= 20; ++i ) {
                printf ("i: %i\t  i^2: %i \t i^3: %i\n", i, i * i, i * i * i);
        }
        return 0;
}
