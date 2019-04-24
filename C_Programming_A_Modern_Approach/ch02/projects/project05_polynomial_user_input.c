/*
 *      Project 2.5 from King's C Programming: A Modern Approach
 *
 *      Write a program that asks the user to enter a value for x,
 *      then display value of following polynomial:
 *
 *              3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 *
 */

#include <stdio.h>

int main (void)
{
        float x, ans;

        printf ("Enter the value of x: ");
        scanf ("%f", &x);

        ans = 3 * (x * x * x * x * x) + 2 * (x * x * x * x)
            - 5 * (x * x * x) - (x * x) + (7 * x) - 6;

        printf ("Answer = %.2f\n", ans);

        return 0;
}
