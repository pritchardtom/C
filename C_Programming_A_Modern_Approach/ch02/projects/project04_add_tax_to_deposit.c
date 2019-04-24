/*
 *      Project 2.4 from King's C Programming: A Modern Approach
 *
 *      Write a program that asks the user to enter a monetary
 *      amount (£), then print amount with 5% tax added.
 *
 */

#include <stdio.h>

#define TAX_RATE 5.0f

int main (void)
{
        float deposit, total;

        printf ("Enter deposit (£): ");
        scanf ("%f", &deposit);

        total = (TAX_RATE / 100) * deposit;

        printf ("\nWith tax added: %.2f\n", total + deposit);


        return 0;
}
