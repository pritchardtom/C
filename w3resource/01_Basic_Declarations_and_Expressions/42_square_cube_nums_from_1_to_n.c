/*
 *      Exercise 42: Write a C program to print a number, it’s square and cube
 *      in a line, starting from 1 to n, where n is set by user.
 *
 */

#include <stdio.h>

int main (void)
{
        int n;

        printf ("Enter number: ");
        scanf ("%i", &n);
        printf ("\n");

        for ( int i = 1; i <= n; ++i )
                printf ("\tn: %4i   n^2: %4i  n^3: %4i \n", i, i * i, i * i * i);

        printf ("\n");

        return 0;
}
