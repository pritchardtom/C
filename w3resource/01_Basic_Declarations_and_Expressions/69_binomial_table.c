/*
 *      Exercise 69: Write a C program to print a binomial coefficient table.
 *
 *      Formula for binomial coefficient:     _____ n! ______
 *                                            (n - r)! * r!
 *
 *      I solved a slightly different problem, as it's been a while since I
 *      used binomial coefficients.  Plus, factorials always scream
 *      recursion.
 */

#include <stdio.h>

int calcBinomial (int n, int k)
{
        if ( n == 0  ||  k == 0)
                return 1;

        return calcBinomial(n - 1, k - 1) + calcBinomial(n - 1, k);
}

int main (void)
{
        int ans;
        int n = 1;
        int k = 1;

        for (int i = 0; i <= 10; ++i ) {
                ans = calcBinomial(n,k);
                printf ("%i\n", ans);
                ++n;
                ++k;
        }
}
