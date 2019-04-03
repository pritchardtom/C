/*
 *      Exercise 50: Write a C program to read an array of length 5,
 *      and print the position and value of the array elements of value < 5.
 *
 */

#include <stdio.h>

int main (void)
{
        int array[5];
        int num;

        for ( int i = 0; i < 5; ++i ) {
                printf ("Enter number: ");
                scanf ("%i", &num);
                array[i] = num;
        }

        for ( int i = 0; i < 5; ++i ) {
                if ( array[i] < 5 )
                        printf ("Position in array: %i || Value at position: %i\n", i, array[i]);
        }

        return 0;
}
