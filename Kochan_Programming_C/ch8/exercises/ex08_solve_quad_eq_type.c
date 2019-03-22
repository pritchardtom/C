/*
 *      Exercise  8.8 from Kochan's "Programming in C"
 *
 *      Write a function that raise an int to power n.  Return long int.
 *
 */

#include <stdio.h>

int main (void)
{

        int a, b, c, result;

        printf ("\nEnter value for a: ");
        scanf ("%i", &a);
        printf ("Enter value for b: ");
        scanf ("%i", &b);
        printf ("Enter value for c: ");
        scanf ("%i", &c);

        result = (b * b - (4*(a * c)));

        if ( result < 0 ) {
                printf ("No!\n");
                printf ("%i\n", result);
        } else
                printf ("Yes!\n");
                printf ("%i\n", result);

                // a = 2, b = 3 c = - 6







        return 0;
 }
