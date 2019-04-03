/*
 *      Exercise 53: Write a C program that accepts principle amount (£),
 *      rate of interest, time (years), and computes the simple interest.
 *
 */

#include <stdio.h>

int main (void)
{
        int years;
        float savings, interest, total;

        printf ("Enter amount in savings: ");
        scanf ("%f", &savings);

        printf ("Enter annual interest rate: ");
        scanf ("%f", &interest);

        printf ("Enter years of saving: ");
        scanf ("%i", &years);

        total = (savings * interest * (float) years) / 100;

        printf ("\nTotal estimated value at end of saving period: £%.2f\n", total);


        return 0;
}
