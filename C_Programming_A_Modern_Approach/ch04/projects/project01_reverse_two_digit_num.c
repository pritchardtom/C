/*
 *      Project 4.1 from King's C Programming: A Modern Approach
 *
 *      Write a program that asks the user to enter a two-digit
 *      number, then prints the number with its digits reversed.
 *
 */

#include <stdio.h>

int main (void)
{
        int num, digit1, digit2;

        printf ("Enter a two-digit number: ");
        scanf ("%d", &num);

        digit1 = num % 10;
        digit2 = num / 10;

        printf ("%d reversed = %d%d\n", num, digit1, digit2);

        return 0;
}
