/*
 *      Exercise 5.4 from Kochan's "Programming in C"
 *
 *      Write a program to print table of first 10 factorials.
 */

#include <stdio.h>

int main (void)
{
        int n, factorial;
        n = factorial = 1;

        printf ("\n n\t  n!\n");
        printf ("---\t ---\n");

        for ( int i = 1; i <= 10; ++i) {
                factorial *= i;
                printf ("%2d\t  %d\n", i, factorial);
        }
        return 0;
}
