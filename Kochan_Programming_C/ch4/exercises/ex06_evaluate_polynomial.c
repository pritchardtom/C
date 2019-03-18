/*
 *      Exercise 4.6 from Kochan's "Programming in C"
 *
 *      - Write a program to evaluate the polynomial:
 *              - 3x^3 - 5x^2 + 6, for x = 2.55
 *
 *      - Need to double check workings.
 */

#include <stdio.h>
#include <math.h>

int main (void)
{

        float x = 2.55;
        float result = (3 * (pow(x,3)) - 5 * (pow(x,2))) + 6;

        printf ("%f\n", result);

        return 0;
}


(3.31 x 10-8 x 2.01 x 10-7) / (7.16 x 10-6 + 2.01 x 10-8)
