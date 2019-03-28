/*
 *      Exercise 09: Write a C program that accepts two integers
 *      from the user and calculate the sum of the two numbers.
 *
 */

#include <stdio.h>

int main (void)
{
        int num1, num2;

        printf ("Enter num: \n");
        scanf ("%i", &num1);

        printf ("Enter num: \n");
        scanf ("%i", &num2);

        printf ("Sum of nums: %i\n", num1 + num2);

        return 0;
}
