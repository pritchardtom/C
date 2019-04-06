/*
 *      Exercise 73: Write a C programming that reads in two integers,
 *      and check whether the first integer is a multiple of the second integer.
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

        if ( num2 % num1 == 0 )
                printf ("It's a multiple\n");
        else
                printf ("It's not a multiple\n");

        return 0;
}
