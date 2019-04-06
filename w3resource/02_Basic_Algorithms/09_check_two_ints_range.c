/*
 *      Exercise 09:  Write a C program to check whether two given integer
 *      values are in the range 20..50 inclusive.
 *
 *      Return true if 1 or other is in the said range otherwise false.
 *
 */

#include <stdio.h>

int testRanges (int x, int y)
{
        return (x >= 20 && x <= 50) || (y >= 20 && y <= 50);
}

int main (void)
{
        int num1, num2;

        printf ("Enter number 1: ");
        scanf ("%i", &num1);
        printf ("Enter number 2: ");
        scanf ("%i", &num2);

        printf ("%i\n", testRanges(num1, num2));

        return 0;
}
