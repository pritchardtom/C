/*
 *      Exercise 55: Write a C program that swaps two numbers without using
 *      a third variable.
 *
 */

#include <stdio.h>

int main (void)
{
        int num1, num2;

        printf ("Please enter number 1: ");
        scanf ("%i", &num1);
        printf ("Please enter number 2: ");
        scanf ("%i", &num2);

        // "swap" values of num1 and num2:

        num1 += num2;
        num2 = num1 - num2;
        num1 -= num2;

        printf ("Number 1 now equals: %i\n", num1);
        printf ("Number 2 now equals: %i\n", num2);

        return 0;
}
