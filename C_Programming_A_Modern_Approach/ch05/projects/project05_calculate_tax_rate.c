/*
 *      Project 5.5 from King's C Programming: A Modern Approach
 *
 *      Write a program to calculate the specific tax rates
 *      based on income.
 *
 */

#include <stdio.h>

int main (void)
{
        float income, tax;

        printf ("Enter your income: ");
        scanf ("%f", &income);

        if ( income <= 750.00 ) {
                tax = 0.01 * income;
                printf ("Tax to pay: £%.2f\n", tax);
        }
        else if ( income > 750.00  &&  income <= 2250.00 ) {
                tax = 7.50 + (0.02 * income);
                printf ("Tax to pay: £%.2f\n", tax);
        }
        else if ( income > 2250.00  &&  income <= 3750.00 ) {
                tax = 37.50 + (0.03 * income);
                printf ("Tax to pay: £%.2f\n", tax);
        }
        else if ( income > 3750.00  &&  income <= 5250.00 ) {
                tax = 82.50 + (0.04 * income);
                printf ("Tax to pay: £%.2f\n", tax);
        }
        else if ( income > 5250.00  &&  income <= 7000.00 ) {
                tax = 142.50 + (0.05 * income);
                printf ("Tax to pay: £%.2f\n", tax);
        }
        else if ( income > 7500.00 ) {
                tax = 230.00 + (0.06 * income);
                printf ("Tax to pay: £%.2f\n", tax);
        }
        else
                printf ("Error.\n");

        return 0;
}
