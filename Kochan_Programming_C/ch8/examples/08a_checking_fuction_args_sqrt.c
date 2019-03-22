/*
 *      Program 8.8a from Kochan's "Programming in C"
 *
 *      In 8.8, absoluteValue stopped negative numbers from being
 *      entered, causing an infinite loop.
 *              - This is another way of achieving the same thing.
 */

#include <stdio.h>

float squareRoot (float x)
{
        const float epsilon = .00001;
        float guess = 1.0;
        float absoluteValue (float x); // prototype declaration

        if ( x < 0 ) {
                printf ("Negative argument to squareRoot\n");
                return -1.0;
        }

        while ( absoluteValue (guess * guess - x) >= epsilon )
                guess = ( x / guess + guess ) / 2.0;

        return guess;
}

int main (void)
{

        printf ("squareRoot(2.0) = %f\n", squareRoot(2.0));
        printf ("squareRoot(144.0) = %f\n", squareRoot(144.0));
        printf ("squareRoot(17.5) = %f\n", squareRoot(17.5));

        return 0;
}

float absoluteValue (float x)
{
        if ( x < 0 )
                x = -x;

        return x;
}
