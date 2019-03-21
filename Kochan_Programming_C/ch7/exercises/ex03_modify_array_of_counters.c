/*
 *      Exercise 7.3 from Kochan's "Programming in C"
 *
 *      Modify ../examples/02_... so any number of responses can be entered.
 *      Type 999 to exit the program.
 *
 *      Description said nothing about using variable array size, so I've
 *      permitted an array of 1000, more than enough for this test program.
 */

#include <stdio.h>

#define ARR_LIMIT 1000

int main (void)
{
        int ratingCounters[ARR_LIMIT];
        int i, response;

        for ( i = 1; i <= 10; ++i )
                ratingCounters[i] = 0;

        do {
                scanf ("%i", &response);
                if ( response < 1  ||  response > 10 )
                        printf ("Bad response: %i\n", response);
                else
                        ++ratingCounters[response];
        }
        while ( response != 999 );


        printf ("\n\nRating  Number of Responses\n");
        printf ("------ -------------------\n");

        for ( i = 1; i <= 10; ++i )
                printf ("%4i%4i\n", i, ratingCounters[i]);

        return 0;
}
