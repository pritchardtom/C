/*
 *      Exercise 35: Write a C program to check if two numbers
 *      in a pair is in ascending order or descending order.
 *
 */

#include <stdio.h>

int main (void)
{
        int x, y;

        printf ("Enter two numbers: ");
        scanf ("%i %i", &x, &y);

        if ( x < y )
                printf ("\nAscending order!\n");
        else
                printf ("\nDescending order!\n");

        return 0;
}
