/*
 *      Exercise 5.9 from Kochan's "Programming in C"
 *
 *      Re-write programs 5.2 - 5.5. using while loops.
 *      See ../examples/05... for original code.
 */

#include <stdio.h>

int main (void)
{
        int n, number, triangularNumber, counter;

        counter = 1;
        while ( counter <= 5 ) {
                printf ("What triangular number do you want? \n");
                scanf ("%i", &number);
                ++counter;

                triangularNumber = 0;
                n = 1;

                while ( n <= number ) {
                        triangularNumber += n;
                        ++n;
                }
                printf ("Triangular number %i is: %i\n", number, triangularNumber);
        }
        return 0;
}
