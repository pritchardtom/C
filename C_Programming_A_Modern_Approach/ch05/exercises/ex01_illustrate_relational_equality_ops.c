/*
 *      Exercise 5.1 from King's C Programming: A Modern Approach
 *
 *      Show the output produced by each of the following statements.
 *
 */

#include <stdio.h>

int main (void)
{
        int i, j, k;

        // a):
        i = 2;
        j = 3;
        k = i * j == 6;
        printf ("%d\n", k);

        // b):
        i = 5;
        j = 10;
        k = 1;
        printf ("%d\n", k > i < j);

        // c):
        i = 3;
        j = 2;
        k = 1;
        printf ("%d\n", i < j == j < k);

        // d):
        i = 3;
        j = 4;
        k = 5;
        printf ("%d\n", i % j + i < k);

        return 0;
}
