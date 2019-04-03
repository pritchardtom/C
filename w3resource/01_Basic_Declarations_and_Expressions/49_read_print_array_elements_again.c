/*
 *      Exercise 49: Write a C program to read and print the elements of
 *      an array of length 7.
 *
 *      Before printing elements, put the triple of the previous position,
 *      starting from the second position of the array.
 *
 */

#include <stdio.h>

int main (void)
{
        int array[7];
        int num;

        printf ("Enter first number: ");
        scanf ("%i", &num);

        array[0] = num;

        printf ("%i\n", array[0]);

        for ( int i = 1; i < 7; ++i ) {
                array[i] = array[i - 1] * 3;
                printf ("%i\n", array[i]);
        }

        return 0;
}
