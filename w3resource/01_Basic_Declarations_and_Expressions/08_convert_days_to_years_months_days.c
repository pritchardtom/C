/*
 *      Exercise 08: Write a C program to convert specified days into years, weeks and days.
 *              Note: Ignore leap year.
 *
 */

#include <stdio.h>

int main (void)
{
        int days = 1329;


        printf ("\n");
        printf ("%i days in  years: %i\n", days, days / 365);
        printf ("%i days in months: %i\n", days, (days % 365) / 7);
        printf ("%i days in   days: %i\n", days, (days % 365) % 7);
        printf ("\n");

        return 0;
}
