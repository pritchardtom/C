/*
 *      Exercise 40: Write a C program to find all numbers (between two given ints)
 *      with a remainder of 2 or 3, after being divided by 7.
 *
 */

#include <stdio.h>

int main (void)
{
        int x, y;

        printf ("Enter two numbers: ");
        scanf ("%i %i", &x, &y);
        printf ("\n");

        for ( ; x <= y; ++x ) {
                if ( x % 7 == 2  ||  x % 7 == 3 )
                        printf ("\t%i \n", x);
        }

        printf ("\n");

        return 0;
}
