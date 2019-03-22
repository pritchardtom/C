/*
 *      Program 8.9 from Kochan's "Programming in C"
 *
 *      Using a function to find min value in an array
 *
 */

#include <stdio.h>

int minimum (int values[10])
{
        int minValue, i;

        minValue = values[0];

        for ( i = 1; i < 10; ++i )
                if ( values[i] < minValue )
                        minValue = values[i];

        return minValue;
}

int main (void)
{
        int scores[10], i, minScore;
        //int minimum(int values[10]);  This is not needed as function declared before main.

        printf ("Enter 10 scores: \n");

        for ( i = 0; i < 10; ++i )
                scanf ("%i", &scores[i]);

        minScore = minimum(scores);
        printf ("Min score is: %i\n", minScore);

        return 0;
}
