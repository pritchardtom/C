/*
 *      Exercise 7.6 from Kochan's "Programming in C"
 *
 *      Generate first 15 Fibonacci nums without using an array.
 */

#include <stdio.h>

int main (void)
{
        int current, next, previous, i;

        previous = 0;
        current = 1;
        i = 2;

        printf ("%i\n", previous);
        printf ("%i\n", current);

        while ( i < 15 ) {
                next = current + previous;
                printf ("%i\n", next);
                previous = current;
                current = next;
                ++i;
        }
        printf ("\n");
        return 0;
}
