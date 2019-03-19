/*
 *      Program 5.3 from Kochan's "Programming in C"
 *
 */

#include <stdio.h>

int main (void)
{
        int n, triangularNumber;
        triangularNumber = 0;

        printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
        printf ("  n      Sum from 1 to n\n");
        printf ("----     ---------------\n");

        for ( n = 1; n <= 10; ++n ) {
                triangularNumber += n;
                printf (" %2i            %i\n", n, triangularNumber);
        }
        return 0;
}