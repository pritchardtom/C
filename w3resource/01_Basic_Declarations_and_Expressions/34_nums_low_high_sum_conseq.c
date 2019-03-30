/*
 *      Exercise 34: Write a C program to print the numbers from the lowest to
 *      the highest (inclusive) and the sum of consecutive integers from
 *      a given pair of numbers.
 *
 *      Example output on w3resource seems wrong.  Doesn't print consecutive
 *      numbers, so...
 *
 */

#include <stdio.h>

int main (void)
{
        int low, high, sum = 0;

        printf ("Enter two numbers, lowest first: \n");
        scanf ("%i %i", &low, &high);
        printf ("\n");

        for ( ; low <= high; ++low ) {
                printf ("%i\n", low);
                sum += low;
        }

        printf ("Sum: %i\n", sum);
        printf ("\n");

        return 0;
}
