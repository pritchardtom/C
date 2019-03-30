/*
 *      Exercise 39: Write a C program to calculate the sum of all numbers
 *      not divisible by 17 between two given integer numbers.
 *
 */

#include <stdio.h>

int main (void)
{
        int x, y, sum = 0;

        printf ("Enter two numbers: ");
        scanf ("%i %i", &x, &y);

        printf ("\nNumbers not divisble by 17 in range provided: ");

        printf ("\n\n ");
        for ( ; x <= y; ++x ) {
                if ( x % 17 != 0 ) {
                        printf ("\t%i \n", x);
                        sum += x;
                }
        }

        printf ("\n Sum of these nums: %i\n\n", sum);


        return 0;
}
