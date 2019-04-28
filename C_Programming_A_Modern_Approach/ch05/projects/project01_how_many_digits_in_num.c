/*
 *      Project 5.1 from King's C Programming: A Modern Approach
 *
 *      Write a program that calculates how many digits a number
 *      contains.
 *
 *      Assume that the number will never be more than four digits.
 *
 */

#include <stdio.h>

int main (void)
{
        int num;

        printf ("Please enter a number: ");
        scanf ("%d", &num);

        if ( num > 0  &&  num < 10 )
                printf ("%d has one digit\n", num);
        else if ( num > 9  && num < 100 )
                printf ("%d has two digits\n", num);
        else if ( num > 99  &&  num < 1000 )
                printf ("%d has three digits\n", num);
        else if ( num > 999  && num < 10000 )
                printf ("%d has four digits\n", num);
        else
                printf ("%d isn't recognised.\n", num);

        return 0;
}
