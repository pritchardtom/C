/*
 *      Exercise  8.3 from Kochan's "Programming in C"
 *
 *      Modify 8.8 so value of epsilon passed as arg to function.
 *
 */

#include <stdio.h>

float absoluteValue (float x)
{
        if ( x < 0 )
                x = -x;

        return x;
}

float squareRoot (float x, float epsilon)
{
        float guess = 1.0;

        while ( absoluteValue(guess * guess - x) >= epsilon )
                guess = ( x / guess + guess ) / 2.0;

        return guess;
}

int main (void)
{

        printf ("squareRoot(2.0) = %f\n", squareRoot(2.0, .00001));
        printf ("squareRoot(144.0) = %f\n", squareRoot(144.0, .00001));
        printf ("squareRoot(17.5) = %f\n", squareRoot(17.5, .00001));

        return 0;
}
