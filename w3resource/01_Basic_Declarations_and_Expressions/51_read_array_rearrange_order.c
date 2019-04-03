/*
 *      Exercise 51: Write a C program to read an array of length 6,
 *      change the first element by the last, the second element by the fifth,
 *      and the third element by the fourth.
 *
 *      Print the elements of the modified array.
 *
 *      [So, reverse the elements in the array...]
 *
 */

#include <stdio.h>

int main (void)
{
        int array[6];
        int num;

        for ( int i = 0; i < 6; ++i ) {
                printf ("Enter number: ");
                scanf ("%i", &num);
                array[i] = num;
        }

        // "reverse" the array:

        for ( int i = 5; i >= 0; --i )
                printf ("%i\n", array[i]);

        return 0;
}
