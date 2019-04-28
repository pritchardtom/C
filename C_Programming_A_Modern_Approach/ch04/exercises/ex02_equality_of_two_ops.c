/*
 *      Exercise 4.2 from King's C Programming: A Modern Approach
 *
 *      If i and j are positive integers, does (-i) / j have same
 *      value as -(i / j)?
 *
 */

#include <stdio.h>

int main (void)
{
        int i = 12, j = 2;

        printf ("%d\n", (-i) / j);
        printf ("%d\n", -(i / j));

        return 0;
}
