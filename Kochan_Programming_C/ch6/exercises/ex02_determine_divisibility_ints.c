/*
 *      Exercise 6.2 from Kochan's "Programming in C"
 *
 *      Write program to obtain 2 ints from user, and to test
 *      if num1 is evenly divisble by num2
 */

#include <stdio.h>

int main (void)
{
        int num1, num2;

        printf ("Enter two integers: \n");
        scanf ("%i %i", &num1, &num2);

        if ( num1 % num2 == 0 )
                printf ("Evenly divisble!\n");
        else
                printf ("Not divisible evenly.\n");

        return 0;
}
