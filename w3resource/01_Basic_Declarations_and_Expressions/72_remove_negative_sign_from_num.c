/*
 *      Exercise 72: Write a C program to remove any negative sign in
 *      front of a number.
 *
 */

#include <stdio.h>

int main (void)
{
        int num;

        printf ("Enter number: ");
        scanf ("%i", &num);

        if ( num < 0 )
                printf ("\t%i\n", -num);
        else
                printf ("\t%i\n", num);

        return 0;
}
