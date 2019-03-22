/*
 *      Exercise  8.4 from Kochan's "Programming in C"
 *
 *      Modify 8.8 to print guess each time in while loop.
 *              - I modified ex03_... instead, which is a mod of 8.8.
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
        printf ("\n");
        while ( absoluteValue(guess * guess - x) >= epsilon ) {
                guess = ( x / guess + guess ) / 2.0;
                printf ("Guess: %f\n", guess);
        }
        return guess;
}

int main (void)
{

        printf ("squareRoot(2.0) = %f\n", squareRoot(2.0, .00001));
        printf ("squareRoot(144.0) = %f\n", squareRoot(144.0, .00001));
        printf ("squareRoot(17.5) = %f\n", squareRoot(17.5, .00001));
        printf ("\n");

        return 0;
}
