/*
 *      Exercise 30: Write a C program to find and print the square of
 *      each one of the even values from 1 to a specified value.
 *
 */

#include <stdio.h>

int main (void)
{
        int max;

        printf ("Enter max number: ");
        scanf ("%i", &max);

        int array[max];

        for ( int i = 0; i < max; ++i )
                array[i] = i;

        printf ("\nSquared even numbers from array: ");

        for ( int i = 0; i < max; ++i ) {
                if ( array[i] % 2 == 0  &&  array[i] != 0 )
                        printf("n: %i, n^2: %i \n", i, array[i] * array[i]);
        }

        printf ("\n\n");

        return 0;
}
