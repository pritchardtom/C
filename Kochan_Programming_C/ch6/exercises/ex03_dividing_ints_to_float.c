/*
 *      Exercise 6.3 from Kochan's "Programming in C"
 *
 *      Write program to obtain 2 ints from user, and to
 *      divide num1 by num2, returning 3 decimal accuracy.
 */

#include <stdio.h>

int main (void)
{
        int num1, num2;
        float result;

        printf ("Enter two integers: \n");
        scanf ("%i %i", &num1, &num2);

        if ( num1 == 0  ||  num2 == 0 )
                printf ("Divide by zero\n");
        else
                printf ("%.3f \n", (float) num1 / num2);

        return 0;
}
