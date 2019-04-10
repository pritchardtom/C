/*
 *      Program 11.12 from Kochan's "Programming in C"
 *
 *      Slightly modified program to 11.11.
 *              - int array[] becomes int *array in arraySum.
 *              - ptr var removed from arraySum;
 *                      - array used instead.
 */

#include <stdio.h>

int arraySum (int *array, const int n)
{
        int sum = 0;
        int * const arrayEnd = array + n;

        for ( ; array < arrayEnd; ++array )
                sum += *array;

        return sum;
}

int main (void)
{
        int values[10] = { 3, 7, -9, 3, 6, -1, 7, 9, 1, -5 };

        printf ("The sum is %i\n", arraySum(values, 10));
        return 0;
}
