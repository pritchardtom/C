/*
 *      Exercise 59:  Write a C program to display sum of series:
 *            1 + 1/2 + 1/3 + ... + 1/n
 *
 */

#include <stdio.h>

int main (void)
{
        float sum_of_fracs = 0;
        int n;

        printf ("Enter a value, n: ");
        scanf ("%i", &n);

        for ( int i = 1; i <= n; ++i )
                sum_of_fracs += (float) 1 / i;

        printf ("Result of 1 + 1/2 + 1/3 + ... + 1/%i = %.3f\n", n, sum_of_fracs);

        return 0;
}
