/*
 *      Exercise 4.4 from Kochan's "Programming in C"
 *
 *      - Write a program to convert 27F to Celsius using:
 *              - C = (F - 32) / 1.8
 */


#include <stdio.h>

int main (void)
{
        int fahr = 27;
        float celsius = (fahr - 32) / 1.8;

        printf ("%iF in Celsius = %f\n", fahr, celsius);
        return 0;
}
