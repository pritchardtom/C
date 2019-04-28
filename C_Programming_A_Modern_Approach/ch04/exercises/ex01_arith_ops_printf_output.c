/*
 *      Exercise 4.1 from King's C Programming: A Modern Approach
 *
 *      Show the output produced by the following program fragments.
 *
 */

#include <stdio.h>

int main (void)
{
        int i, j, k;

        // a):
        i = 5;
        j = 3;
        printf ("%d %d\n", i / j, i % j);

        // b):
        i = 2;
        j = 3;
        printf ("%d\n", (i + 10) % j);

        // c):
        i = 7;
        j = 8;
        k = 9;
        printf ("%d\n", (i + 10) % k / j);

        // d):
        i = 1;
        j = 2;
        k = 3;
        printf ("%d\n", (i + 5) % (j + 2) / k);

        return 0;
}
