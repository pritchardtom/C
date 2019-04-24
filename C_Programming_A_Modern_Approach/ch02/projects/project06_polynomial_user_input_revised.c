/*
 *      Project 2.6 from King's C Programming: A Modern Approach
 *
 *      Modify Project 2.5 so the polynomial uses the following
 *      formula instead:
 *
 *              ((((3x + 2)x - 5)x - 1)x + 7)x - 6
 *
 *      This has fewer multiplications, and is known as Horner's Rule.
 *
 */

#include <stdio.h>

int main (void)
{
        float x, ans;

        printf ("Enter the value of x: ");
        scanf ("%f", &x);

        ans = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

        printf ("Answer = %.2f\n", ans);

        return 0;
}
