/*
 *      Exercise 58: Write a C program that accepts four real numbers from
 *      the keyboard, finds the max and min of these four values,
 *      and prints out the difference of these max/min numbers.
 *
 */

#include <stdio.h>

int main (void)
{
        float array[4];
        float min, max;

        for ( int i = 0; i < 4; ++i ){
                printf ("Enter number: ");
                scanf ("%f", &array[i]);
        }

        min = max = array[0];

        for ( int i = 1; i < 4; ++i ) {
                if ( array[i] < min )
                        min = array[i];
                else if ( array [i] > max )
                        max = array[i];
        }

        printf ("Min: %.2f\n", min);
        printf ("Max: %.2f\n", max);

        return 0;
}
