/*
 *      Exercise 21: Write a C program that reads an integer and check
 *      the specified range where it belongs.
 *      Print an error message if the number is negative and greater than 80
 *
 */

#include <stdio.h>

int main (void)
{
        int x;

        printf ("Enter number: \n");
        scanf ("%i", &x);

        if ( x < 0  ||  x > 80 )
                printf ("Error\n");
        else if ( x >= 0  &&  x <= 20)
                printf ("Range of x: [0..20]\n");
        else if ( x > 20  &&  x <= 40)
                printf ("Range of x: [21..40]\n");
        else if ( x > 40  &&  x <= 60)
                printf ("Range of x: [41..60]\n");
        else if ( x > 60  &&  x <= 80)
                printf ("Range of x: [61..80]\n");

        return 0;
}
