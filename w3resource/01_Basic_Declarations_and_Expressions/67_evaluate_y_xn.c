/*
 *      Exercise 67: Write a C program to evaluate the equation y=xn,
 *      when n is a non-negative integer.
 *
 */

#include <stdio.h>

int main (void)
{
        int n;
        int count = 1;
        float x, y = 1.0;

        printf ("Enter value of x: \n");
        scanf ("%f", &x);
        printf ("Enter value of n: \n");
        scanf ("%i", &n);

        while ( count <= n ) {
                y *= x;
                ++count;
        }

        printf ("x = %f || n = %i || x^n = %f\n", x, n, y);
        return 0;
}
