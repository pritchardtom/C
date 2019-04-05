/*
 *      Exercise 68: Write a C program to print the powers of 2 table for the
 *      power 0 to 10.
 *
 */

#include <stdio.h>

int main (void)
{

        printf (" n      n2\n");
        printf ("---    ----\n");

        for ( int i = 0; i <= 10; ++i )
                printf ("%2i      %i\n", i, i * i);
        return 0;
}
