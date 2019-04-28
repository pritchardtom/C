/*
 *      Exercise 5.3 from King's C Programming: A Modern Approach
 *
 *      Show the output produced by each of the following statements.
 *
 */

#include <stdio.h>

int main (void)
{
        int i, j, k;

        // a):
        i = 3;
        j = 4;
        k = 5;
        printf ("%d\n", i < j || ++j < k);
        printf ("%d %d %d\n", i, j, k);

        // b):
        i = 7;
        j = 8;
        k = 9;
        printf ("%d\n", (i - 7 && j++) < k);
        printf ("%d %d %d\n", i, j, k);

        // c):
        i = 7;
        j = 8;
        k = 9;
        printf ("%d\n", (i = j) || (j - k));
        printf ("%d %d %d\n", i, j, k);

        // d):
        i = 1;
        j = 1;
        k = 1;
        printf ("%d\n", ++i || (++i && ++k));
        printf ("%d %d %d\n", i, j, k);

        return 0;
}
