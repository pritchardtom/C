/*
 *      Exercise 75: Write a C program that accepts one seven-digit number
 *      and separates the number into its individual digits, and prints
 *      the digits separated from one another by two spaces each.
 *
 */

#include <stdio.h>

int main (void)
{
        int num, tmp;
        int factor = 1;

        printf ("Enter number: ");
        scanf ("%i", &num);

        tmp = num;

        while ( tmp ) {
                tmp /= 10;
                factor *= 10;
        }

        while ( factor > 1 ) {
                factor /= 10;
                printf ("%i  ", num / factor);
                num %= factor;
        }

        printf ("\n");
        return 0;
}
