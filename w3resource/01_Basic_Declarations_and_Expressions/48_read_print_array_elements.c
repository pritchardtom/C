/*
 *      Exercise 48: Write a C program to read and print the elements of
 *      an array of length 7.
 *
 *      Before printing elements, replace every n <= 0 with 100.
 *
 */

#include <stdio.h>

int main (void)
{
        int array[7];
        int num;

        for ( int i = 0; i < 7; ++i ) {
                printf ("Enter number: ");
                scanf ("%i", &num);

                if ( num <= 0 )
                        array[i] = 100;
                else
                        array[i] = num;
        }

        for ( int i = 0; i < 7; ++i )
                printf ("%i\n", array[i]);

        return 0;
}
