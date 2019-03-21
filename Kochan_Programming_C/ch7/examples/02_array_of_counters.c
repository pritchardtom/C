/*
 *      Program 7.2 from Kochan's "Programming in C"
 *
 *      Demonstrating an array of counters.
 */

#include <stdio.h>

int main (void)
{
        int ratingCounters[11]; /* because ratingCounters[0] never used, need 11 */
        int i, response;

        for ( i = 1; i <= 10; ++i )
                ratingCounters[i] = 0;

        for ( i = 1; i <= 20; ++i ) {
                scanf ("%i", &response);

                if ( response < 1  ||  response > 10 )
                        printf ("Bad response: %i\n", response);
                else
                        ++ratingCounters[response];
        }

        printf ("\n\nRating  Number of Responses\n");
        printf ("------ -------------------\n");

        for ( i = 1; i <= 10; ++i )
                printf ("%4i%4i\n", i, ratingCounters[i]);

        return 0;
}
