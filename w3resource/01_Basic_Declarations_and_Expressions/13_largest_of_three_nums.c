/*
 *      Exercise 13: Write a C program that accepts three integers and find
 *      the maximum of three.
 *
 */

#include <stdio.h>

int main (void)
{
        int x, y, z;
        int largest;

        printf ("Enter three numbers: \n");
        scanf ("%i %i %i", &x, &y, &z);

        if ( x > y  && x > z )
                largest = x;

        if ( y > x  && y > z )
                largest = y;

        if ( z > x  && z > y )
                largest = z;

        printf ("Largest num: %i\n", largest);

        return 0;
}
