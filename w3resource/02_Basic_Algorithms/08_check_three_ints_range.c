/*
 *      Exercise 08:  Write a C program to check whether three given integer
 *      values are in the range 20..50 inclusive.
 *
 *      Return true if 1 or more of them are in the said range,
 *      otherwise return false.
 *
 *      Rather than continue without a function, this one will be
 *      simpler code-wise if using function.
 *
 */

#include <stdio.h>

int testRanges (int x, int y, int z)
{
        return (x >= 20 && x <= 50) || (y >= 20 && y <= 50) || (z >= 20 && z <= 50);
}

int main (void)
{
        int num1, num2, num3;

        printf ("Enter number 1: ");
        scanf ("%i", &num1);
        printf ("Enter number 2: ");
        scanf ("%i", &num2);
        printf ("Enter number 3: ");
        scanf ("%i", &num3);

        printf ("%i\n", testRanges(num1, num2, num3));

        return 0;
}
