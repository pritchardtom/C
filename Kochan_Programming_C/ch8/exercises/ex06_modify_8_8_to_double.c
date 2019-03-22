/*
 *      Exercise  8.6 from Kochan's "Programming in C"
 *
 *      Modify 8.8 so squareRoot accepts a double and returns a double.
 *
 */

#include <stdio.h>

double absoluteValue (double x)
{
        if ( x < 0 )
                x = -x;

        return x;
}

double squareRoot (double x)
{
        const double epsilon = .00001;
        float guess = 1.0;

        while ( absoluteValue(guess * guess - x) >= epsilon )
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
