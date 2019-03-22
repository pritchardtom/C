/*
 *      Exercise  8.11 from Kochan's "Programming in C"
 *
 *      Write a function arraySum (int array[], int array_size).
 *      Have the function return the sum of the elements in the array.
 */

#include <stdio.h>

int arraySum (int array[], int array_size)
{
        int sum = 0;

        for ( int i = 0; i < array_size; ++i )
                sum += array[i];

        return sum;
}

int main (void)
{
        int egArray[3]   = { 1, 2, 3 };
        int egArray2[13] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };
        int result;

        result = arraySum(egArray, 3);
        printf ("Sum of array = %i\n", result);

        result = arraySum(egArray2, 13);
        printf ("Sum of array = %i\n", result);

        return 0;
}
