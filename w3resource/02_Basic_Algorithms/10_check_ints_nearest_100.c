/*
 *      Exercise 10:  Write a C program to check which number nearest to the
 *      value 100 among two given integers.
 *
 *      Return 0 if the two numbers are equal.
 *
 */

#include <stdio.h>

int diff_to_100 (int x)
{
        return 100 - x;
}

int main (void)
{
        int num1, num2;

        printf ("Enter number 1: ");
        scanf ("%i", &num1);
        printf ("Enter number 2: ");
        scanf ("%i", &num2);

        if ( diff_to_100(num1) < diff_to_100(num2) )
                printf ("%i is nearest.\n", num1);

        if ( diff_to_100(num2) < diff_to_100(num1) )
                printf ("%i is nearest.\n", num2);

        return 0;
}
