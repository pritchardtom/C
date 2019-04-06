/*
 *      Exercise 79: Write a C program using looping to produce the
 *      following table of values:
 *
 *              x       x+2     x+4     x+6
 *           --------------------------------
 *              1       3       5       7
 *              4       6       8       10
 *              7       9       11      13
 *              10      12      14      16
 *              13      15      17      19
 *
 */

#include <stdio.h>

int main (void)
{

        for ( int x = 1; x <= 13; x += 3 )
                printf ("%2i %2i %2i %2i \n", x, x + 2, x + 4, x + 6);

        return 0;
}
