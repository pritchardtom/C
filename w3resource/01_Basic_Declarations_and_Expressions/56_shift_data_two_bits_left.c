/*
 *      Exercise 56: Write a C program to shift given data by two bits to the left.
 *
 */

#include <stdio.h>

int main (void)
{
        int num, result;

        printf ("Enter a number: ");
        scanf ("%i", &num);

        result = num << 2;

        printf ("\n%i shifted by two bits to left: %i\n", num, result);

        return 0;
}
