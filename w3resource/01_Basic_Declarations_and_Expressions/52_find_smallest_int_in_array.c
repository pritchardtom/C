/*
 *      Exercise 52: Write a C program to read an array of length 6,
 *       and find the smallest element and its position.
 *
 */

#include <stdio.h>

int main (void)
{
        int array[6];
        int num, smallest;

        for ( int i = 0; i < 6; ++i ) {
                printf ("Enter number: ");
                scanf ("%i", &num);
                array[i] = num;
        }

        smallest = array[0];

        for ( int i = 1; i < 6; ++i ) {
                if ( array[i] < smallest )
                        smallest = array[i];
        }

        printf ("\nSmallest number: %i\n", smallest);

        return 0;
}
