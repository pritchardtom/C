/*
 *      Exercise 32: Write a C program to print all numbers between 1 and 100,
 *      which, when divided by a number provided at input, the remainder == 3.
 *
 *      This solution matches output expected on w3resource, but still not
 *      convinced this works properly.
 */

#include <stdio.h>

int main (void)
{
        int num;

        printf ("Enter number: \n");
        scanf ("%i", &num);

        for ( int i = 1; i < 101; ++i ) {
                if ( (i % num) == 3 )
                        printf ("n: %i\n", i);
        }

        printf ("\n");

        return 0;
}
