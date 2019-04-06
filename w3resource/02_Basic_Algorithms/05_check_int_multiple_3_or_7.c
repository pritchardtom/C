/*
 *      Exercise 05:  Write a C program to check if a given positive
 *      number is a multiple of 3 or a multiple of 7.
 *
 */

#include <stdio.h>

int main (void)
{
        int num;

        printf ("Enter number: ");
        scanf ("%i", &num);

        if ( num % 3 == 0  ||  num % 7 == 0 )
                printf ("%i is a multiple of 3 or 7.\n", num);
        else
                printf ("Not a multiple of 3 or 7.\n");

        return 0;
}
