/*
 *      Exercise 7.4 from Kochan's "Programming in C"
 *
 *      Write a program that calculates the average of an array of 10
 *      floating point numbers.
 *
 *      I've decided to hard code these values in, as I cannot be bothered to
 *      type 10x floats at terminal.
 */

#include <stdio.h>

int main (void)
{
        float numbers[10] = {
                                3.45, 2.67, 1.09, 9.76, 0.876,
                                23.16, 13.0, 6.4, 8.9, 1.11 };

        float sum;

        for ( int i = 0; i < 10; ++i )
                sum += numbers[i];

        printf ("Average = %.3f\n", sum / 10.0);
        return 0;
}
