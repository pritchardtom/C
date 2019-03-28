/*
 *      Exercise 18: Write a C program to convert a given integer (in days)
 *      to years, months and days.
 *              - Assume that all months have 30 days and all years have 365 days.
 *
 */

#include <stdio.h>

int main (void)
{
        int input;
        int years, months, days;

        printf ("Enter number of days: \n");
        scanf ("%i", &input);

        years = input / 365;
        input = input - (years * 365);

        months = input / 30;
        input = input - (months * 30);

        days = input;

        printf ("Days in yy:mm:dd = %i:%i:%i \n", years, months, days);

        return 0;
}
