/*
 *      Exercise 47: Write a C program that reads an integer
 *      and find all its divisors.
 *
 */

#include <stdio.h>

int main (void)
{
        int num;

        printf ("Enter number: ");
        scanf ("%i", &num);

        printf ("\nDivisors of %i: ", num);

        for ( int i = 1; i <= num; ++i ) {
                if ( num % i == 0 )
                        printf ("%i ", i);
        }

        printf ("\n");

        return 0;
}
