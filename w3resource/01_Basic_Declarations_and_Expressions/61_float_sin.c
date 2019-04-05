/*
 *      Exercise 61: Write a C program that accepts a real number x and
 *      prints out the corresponding value of sin(1/x) using 4-decimal places.
 *
 */

#include <stdio.h>
#include <math.h>

int main (void)
{
        float num, ans;

        printf ("Enter number > 0: ");
        scanf ("%f", &num);

        printf ("sin(1/x) = %.4f\n", sin(1 / num));

        return 0;
}
