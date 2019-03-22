/*
 *      Program 8.10 from Kochan's "Programming in C"
 *
 *      8.9 was inflexible: could receive 10 values and that's it.
 *      This version takes the size of the array as an arg.
 *
 */

#include <stdio.h>

int minimum (int values[], int arraySize)
{
        int minValue, i;

        minValue = values[0];

        for ( i = 1; i < arraySize; ++i )
                if ( values[i] < minValue )
                        minValue = values[i];

        return minValue;
}

int main (void)
{
        int array1[5] = { 157, -28, -37, 26, 10 };
        int array2[7] = { 12, 45, 1, 10, 5, 3, 22 };

        printf ("array1 minimum: %i\n", minimum(array1, 5));
        printf ("array2 minimum: %i\n", minimum(array2, 7));

        return 0;
}
