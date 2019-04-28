/*
 *      Exercise 4.14 from King's C Programming: A Modern Approach
 *
 *      Add parentheses to following to show how compiler would
 *      interpret them:
 *
 */

#include <stdio.h>

int main (void)
{
        int a = 10, b = 2, c = 3, d = 1;

        // a) a * b - c * d + a
        printf ("%d\n", ((a * b) - (c * d) + a));

        // b) a / b % c / d
        printf ("%d\n", (a / b) % (c / d));

        // c) - a - b + c - + d
        printf ("%d\n", ((- a - b) + c) - (+ d));

        // d) a * - b / c - d
        printf ("%d\n", ((a * (- b) / c) - d));
        return 0;
}
