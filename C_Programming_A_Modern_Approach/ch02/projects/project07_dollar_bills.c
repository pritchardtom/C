/*
 *      Project 2.7 from King's C Programming: A Modern Approach
 *
 *      Write a program that asks the user to enter an amount in
 *      $ and then shows how that amount breaks down into the
 *      various $20, $10, etcetera.
 *
 */

#include <stdio.h>

int main (void)
{
        int amount;

        printf ("Enter amount (£): ");
        scanf ("%d", &amount);

        printf ("£20 notes: %d\n", amount / 20);
        amount %= 20;

        printf ("£10 notes: %d\n", amount / 10);
        amount %= 10;

        printf (" £5 notes: %d\n", amount / 5);
        amount %= 5;

        printf (" £2 coins: %d\n", amount / 2);
        amount %= 2;

        printf (" £1 coins: %d\n", amount / 1);

        return 0;
}
