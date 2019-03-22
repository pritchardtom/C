/*
 *      Exercise  8.7 from Kochan's "Programming in C"
 *
 *      Write a function that raise an int to power n.  Return long int.
 *
 */

#include <stdio.h>

long int x_to_the_n (int x, int n)
{
        long int result = 1;

        for ( int i = 1; i <= n; ++i )
                result *= x;

        return result;
}

int main (void)
{

        printf ("%i to power %i = %li\n", 3, 5, x_to_the_n(3, 5));
        printf ("%i to power %i = %li\n", 2, 15, x_to_the_n(2, 15));
        printf ("%i to power %i = %li\n", 10, 6, x_to_the_n(10, 6));

        return 0;
 }
