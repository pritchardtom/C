/*
 *      Exercise 62: Write a C program that accepts a positive integer < 500,
 *      and prints out the sum of the digits of this number.
 *
 */

#include <stdio.h>

int main (void)
{
        int num, digit;
        int sum = 0;

        printf ("Enter a number: ");
        scanf ("%i", &num);

        while ( num != 0 ) {
                digit = num % 10;
                sum += digit;
                num /= 10;
        }

        printf ("Sum of digits of number entered: %i\n", sum);

        return 0;
}
