/*
 *      Exercise 5.4 from King's C Programming: A Modern Approach
 *
 *      Write a single expression whose value is either -1, 0, or 1,
 *      depending on whether i is <, =, or > j.
 *
 */

#include <stdio.h>

int main (void)
{
        int i, j;

        // i < j example:
        i = 2;
        j = 4;
        printf ("%d\n", (i > j) - (i < j));

        // i = j example:
        i = 2;
        j = 2;
        printf ("%d\n", (i > j) - (i < j));

        // i > j example:
        i = 8;
        j = 4;
        printf ("%d\n", (i > j) - (i < j));

        return 0;
}
