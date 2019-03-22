/*
 *      Exercise  8.8 from Kochan's "Programming in C"
 *
 *      Write a program to solve discriminant of quadratic equation.
 *      Then attempt to determine the two roots of the equation.
 *
 *      Improve by writing discriminant code in a separate function?
 *      Not entirely sure it's correct.  Double check later.
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
        const float epsilon = .00001;
        float guess = 1.0;

        while ( absoluteValue(guess * guess - x) >= epsilon )
                guess = ( x / guess + guess ) / 2.0;

        return guess;
}

int main (void)
{

        int a, b, c;
        float discriminant;
        float x1, x2;

        printf ("\nEnter value for a: ");
        scanf ("%i", &a);
        printf ("Enter value for b: ");
        scanf ("%i", &b);
        printf ("Enter value for c: ");
        scanf ("%i", &c);

        discriminant = (b * b - (4*(a * c)));

        if ( discriminant >= 0 ) {
                x1 = (-b + squareRoot(discriminant)) / 2 * a;
                x1 = (-b - squareRoot(discriminant)) / 2 * a;

                if ( x1 - x2 > 0.1 )
                        printf ("Possible sqrt values of x1: %f and x2: %f", x1, x2);
                else
                        printf ("One of x1/x2 is imaginary\n");
        } else
                printf ("Both are imaginary\n");

        return 0;
}
