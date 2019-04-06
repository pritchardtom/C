/*
 *      Exercise 01:  Write a C program to compute the sum of the two given
 *      integer values.
 *
 *      If the two values are the same, return the triple of their sum.
 *
 */

#include <stdio.h>

int main (void)
{
        int num1, num2;

        printf ("Enter number 1: ");
        scanf ("%i", &num1);
        printf ("Enter number 2: ");
        scanf ("%i", &num2);

        if ( num1 != num2 )
                printf ("Sum of two numbers: %i\n", num1 + num2);
        else
                printf ("Nums were same.  Here's triple their sum: %i\n", (num1 + num2) * 3);

        return 0;
}
