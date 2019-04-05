/*
 *      Exercise 54: Write a C program that accepts a distance in centimeters
 *      and prints the corresponding value in inches.
 *
 */

#include <stdio.h>

int main (void)
{
        int cms;
        float inches;

        printf ("Enter number of cm: ");
        scanf ("%i", &cms);

        inches = (float) cms * 0.39370;

        printf ("\nInches: %.2f\n", inches);

        return 0;
}
