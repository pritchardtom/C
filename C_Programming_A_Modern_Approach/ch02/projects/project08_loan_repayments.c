/*
 *      Project 2.8 from King's C Programming: A Modern Approach
 *
 *      Write a program that calculates the remaining balance on
 *      a loan after the first, second, and third monthly
 *      replayments.
 *
 */

#include <stdio.h>

int main (void)
{
        float loan, interest, repayment;

        printf ("Enter amount of loan: ");
        scanf ("%f", &loan);

        printf ("Enter interest rate: ");
        scanf ("%f", &interest);

        printf ("Enter monthly payment: ");
        scanf ("%f", &repayment);

        loan += (((interest / 100) * loan) - repayment);
        printf ("\n\nBalance after 1st repayment: %.2f\n", loan);

        loan += (((interest / 100) * loan) - repayment);
        printf ("Balance after 2nd repayment: %.2f\n", loan);

        loan += (((interest / 100) * loan) - repayment);
        printf ("Balance after 3rd repayment: %.2f\n", loan);

        return 0;
}
