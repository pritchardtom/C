/*
 *      Exercise 77: Write a C program that accepts:
 *              - deposit,
 *              - interest rate,
 *              - and days for a loan.
 *
 *      Calculate the simple interest for the loan, using formula:
 *              interest = principal * rate * days / 365.
 *
 */

#include <stdio.h>

int main (void)
{
        int deposit, days;
        float rate, result;

        printf ("Enter deposit amount: ");
        scanf ("%i", &deposit);
        printf ("Enter deposit amount: ");
        scanf ("%f", &rate);
        printf ("Enter deposit amount: ");
        scanf ("%i", &days);

        result = (deposit * rate * days) / 365;

        printf ("\n%f\n", result);

        return 0;
}
