/*
 *      Exercise 38: Write a program that reads two numbers and divides the
 *      first number by second number.
 *
 *      If the division is not possible print: "Division not possible"
 *
 */

#include <stdio.h>

int main (void)
{
        int x, y;

        printf ("Enter two numbers: ");
        scanf ("%i %i", &x, &y);

        if ( x == 0  ||  y == 0 )
                printf ("\nDivision not possible\n");
        else
                printf ("\nResult = %i\n", x / y);

        return 0;
}
