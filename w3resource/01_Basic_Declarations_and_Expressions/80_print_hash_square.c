/*
 *      Exercise 80: Write a C program that reads the side (between 1 and 10 )
 *      of a square, and prints the square using hash (#) character.
 *
 */

#include <stdio.h>

int main (void)
{
        int side, cols;

        printf ("Enter side of square: ");
        scanf ("%i", &side);

        cols = 0;

        for ( int i = 1; i <= side * side; ++i ) {
                if ( cols != side ) {
                        printf ("# ");
                        ++cols;
                }
                else {
                        cols = 0;
                        printf ("\n# ");
                        ++ cols;
                }
        }

        printf ("\n");
        return 0;
}
