/*
 *      Exercise  8.5 from Kochan's "Programming in C"
 *
 *      Modify 8.8 so instead of comparing the difference between value of
 *      x and value of guess * guess, compare the ratio between two values
 *      to 1.
 *
 */

#include <stdio.h>

float absoluteValue (float x)
{
        if ( x < 0 )
                x = -x;

        return x;
}

float squareRoot (float x)
{
        const float epsilon = 1.0;
        float guess = 1.0;

        printf ("\n");

        do {
                guess = ( x / guess + guess ) / 2.0;
                printf ("Guess: %f absVal: %f \n", guess, absoluteValue(guess * guess / x));
        }

        while ( absoluteValue(guess * guess / x) > epsilon );

        return guess;
}

int main (void)
{

        printf ("squareRoot(2.0) = %f\n", squareRoot(2.0));
        printf ("squareRoot(144.0) = %f\n", squareRoot(144.0));
        printf ("squareRoot(17.5) = %f\n", squareRoot(17.5));

        printf ("\n");
        return 0;
}
